/*

 * Program for filtering the X-axis values of accel and transmitting it serially

 * Programmed by B.Aswinth Raj

 * Dated: 21-08-206

 */
  #include <LCD_I2C.h>

LCD_I2C lcd(0x27, 16, 2);
 //dht
 #include <SimpleDHT.h>

// for DHT22, 
//      VCC: 5V or 3V
//      GND: GND
//      DATA: 2
int pinDHT22 = 2;
SimpleDHT22 dht22;
 //potenciometro
 int pot; // Δημιούργησε μια ακέραια μεταβλητή pot
//ULTRASONIC
int echoPin = 12; // Echo Pin
int trigPin = 13; // Trigger Pin
int maximumRange = 350; // Maximum range needed
int minimumRange = 2; // Minimum range needed
long duration, distance; // Duration used to calculate distance

//ACCEL
#define AccelPin      A0         // A0 is connected to X-axis of Accel

#define Samplesize   13         // filterSample number

int Array1 [Samplesize];           // array for holding raw sensor values for sensor


int rawData1, smoothData1;      // variables for sensor data


int toSend;


void setup(){
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);
lcd.begin(); // If you are using more I2C devices using the Wire library use lcd.begin(false)
                 // this stop the library(LCD_I2C) from calling Wire.begin()
lcd.backlight();

lcd.print("choose mode by ");
lcd.setCursor(0, 1);
lcd.print("..potentiometer");
delay(7000);
lcd.clear();  

}


void loop()

{ 
  //pot
  pot=analogRead(A1);  // αποθήκευσε στη μεταβλητή pot την τιμή που διάβασες από την αναλογική είσοδο A1    
//ULTRASONIC

lcd.clear();
if (pot<=341 && pot>0)
{
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(5);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
//Υπολογισμός απόστασης (σε cm) βασιζόμενοι στην ταχύτητα του ήχου.
distance = duration/58.3;
//if (distance >= maximumRange || distance <= minimumRange){
//Serial.println("amogus");
//delay(50);
//}
//else {
Serial.println(distance);
//delay(25);
//};
//Καθυστέρηση 50ms πριν την επόμενη ανάγνωση
//delay(50);
lcd.setCursor(0, 0);
lcd.print(" Distance:"); // You can make spaces using well... spaces
    lcd.setCursor(1, 1); // Or setting the cursor in the desired position.
    lcd.print(distance);
    lcd.setCursor(8, 1); // Or setting the cursor in the desired position.
    lcd.print("cm");
}
if (pot>341 && pot<=682)
{
  float temperature = 0;
  float humidity = 0;
  int err = SimpleDHTErrSuccess;
  if ((err = dht22.read2(pinDHT22, &temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Read DHT22 failed, err="); Serial.println(err);delay(2000);
    return;
   
  }
  
  Serial.print((float)temperature);
  Serial.print(",");
  Serial.println((float)humidity);
   lcd.setCursor(0, 0);
lcd.print("Temp & humidity:"); // You can make spaces using well... spaces
    lcd.setCursor(0, 1); // Or setting the cursor in the desired position.
    lcd.print(temperature);
    lcd.setCursor(5, 1); // Or setting the cursor in the desired position.
    lcd.print("C");
    lcd.setCursor(8, 1); // Or setting the cursor in the desired position.
    lcd.print(humidity);
    lcd.setCursor(12, 1); // Or setting the cursor in the desired position.
    lcd.print("%");
  // DHT22 sampling rate is 0.5HZ.
  delay(2500);
}
if (pot>682 && pot<=1023)
{
//ACCEL
  rawData1 = analogRead(AccelPin);                              // read X-axis of accelerometer

  smoothData1 = digitalSmooth(rawData1, Array1);  


  toSend = map (smoothData1, 193, 280, 0, 255);             // the data from accelerometer mapped to form a byte

  Serial.write (toSend);
 lcd.setCursor(0, 0);
lcd.print("Ping pong game"); // You can make spaces using well... spaces
lcd.setCursor(0, 1);
lcd.print("move to play");   
  delay(100);
}
 lcd.clear();
// lcd.println("GEL SOUDAS");
}


  int digitalSmooth(int rawIn, int *sensSmoothArray){         // "int *sensSmoothArray" passes an array to the function - the asterisk indicates the array name is a pointer

  int j, k, temp, top, bottom;

  long total;

  static int i;

  static int sorted[Samplesize];

  boolean done;


  i = (i + 1) % Samplesize;                  // increment counter and roll over if necc. -  % (modulo operator) rolls over variable

  sensSmoothArray[i] = rawIn;           // input new data into the oldest slot



  for (j=0; j<Samplesize; j++){           // transfer data array into anther array for sorting and averaging

    sorted[j] = sensSmoothArray[j];

  }


  done = 0;                    // flag to know when we're done sorting              

  while(done != 1){        // simple swap sort, sorts numbers from lowest to highest

    done = 1;

    for (j = 0; j < (Samplesize - 1); j++){

      if (sorted[j] > sorted[j + 1]){        // numbers are out of order - swap

        temp = sorted[j + 1];

        sorted [j+1] =  sorted[j] ;

        sorted [j] = temp;

        done = 0;

      }

    }

  }


  bottom = max(((Samplesize * 15)  / 100), 1); 

  top = min((((Samplesize * 85) / 100) + 1  ), (Samplesize - 1));   // the + 1 is to make up for asymmetry caused by integer rounding

  k = 0;

  total = 0;

  for ( j = bottom; j< top; j++){

    total += sorted[j];         // total remaining indices

    k++; 


  }


  return total / k;            // divide by number of samples

}
