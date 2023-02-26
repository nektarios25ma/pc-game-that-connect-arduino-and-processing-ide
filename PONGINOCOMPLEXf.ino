//ΓΕΛ ΣΟΥΔΑΣ ΜΑΘΗΤΗΣ : ΛΕΑΝΔΡΟΣ ΠΑΝΑΓΙΩΤΙΔΗΣ ,ΚΑΘΗΓΗΤΗΣ:ΚΟΥΡΑΚΗΣ ΝΕΚΤΑΡΙΟΣ
  #include <LCD_I2C.h>

LCD_I2C lcd(0x27, 20, 4);
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

//pot2
int pot2; // Δημιούργησε μια ακέραια μεταβλητή pot
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
lcd.setCursor(0, 2);
    lcd.print("GEL SOUDAS 2022-2023");
lcd.setCursor(0,3);
lcd.print("TEACHER:NEKTARIOS K.");
delay(7000);
lcd.clear();  

}


void loop()

{ 
  //pot
  pot=analogRead(A1);  // αποθήκευσε στη μεταβλητή pot την τιμή που διάβασες από την αναλογική είσοδο A1 ,
  //ΜΕΣΩ ΑΥΤΗΣ ΕΠΙΛΕΓΟΥΜΕ ΤΟ MODE-ΛΕΙΤΟΥΡΓΙΑ,ΔΗΛΑΔΗ FLAPPY BIRD-ULTRASONIC ,PING PONG Ή ΕΠΙΔΕΙΞΗ ΘΕΡΜΟΚΡΑΣΙΑΣ-ΥΓΡΑΣΙΑΣ   
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

Serial.println(distance);

lcd.setCursor(0, 0);
lcd.print("Distance:"); lcd.setCursor(10, 0);lcd.print(distance); lcd.setCursor(14, 0); lcd.print("cm"); 
    lcd.setCursor(1, 1); //  setting the cursor in the desired position.
    lcd.print(distance);
    lcd.setCursor(8, 1); //  setting the cursor in the desired position.
    lcd.print("cm");
    lcd.setCursor(0, 2);
    lcd.print("GEL SOUDAS 2022-2023");
lcd.setCursor(0,3);
lcd.print("STUDENT:LEANDROS P.");
    delay(200);
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
  delay(2000);
  //delay(1000);
   lcd.setCursor(0, 0);
lcd.print("Temp & humidity:"); 
    lcd.setCursor(0, 1); //  setting the cursor in the desired position.
    lcd.print(temperature);
    lcd.setCursor(5, 1); //  setting the cursor in the desired position.
    lcd.print("C");
    lcd.setCursor(8, 1); //  setting the cursor in the desired position.
    lcd.print(humidity);
    lcd.setCursor(12, 1); // setting the cursor in the desired position.
    lcd.print("%");
    lcd.setCursor(0, 2);
    lcd.print("GEL SOUDAS 2022-2023");
lcd.setCursor(0,3);
lcd.print("STUDENT:LEANDROS P.");
  // DHT22 sampling rate is 0.5HZ.
  delay(2000);
  
}
if (pot>682 && pot<=1023)
{
//pot2 ,ΜΕΣΩ ΑΥΤΗΣ ΕΠΙΛΕΓΟΥΜΕ ΤΗ ΘΕΣΗ ΤΗΣ ΡΑΚΕΤΑΣ ΣΤΟ PING PONG
  pot2=analogRead(A0);  // αποθήκευσε στη μεταβλητή pot την τιμή που διάβασες από την αναλογική είσοδο A0


  toSend = map (pot2, 0, 1023, 0, 255);             // the data from potenciometer mapped to form a byte

  Serial.write (toSend);

 lcd.setCursor(0, 0);
lcd.print("Ping pong game"); // You can make spaces using well... spaces
lcd.setCursor(0, 1);
lcd.print("move to play"); 
lcd.setCursor(0, 2);
    lcd.print("GEL SOUDAS 2022-2023");
lcd.setCursor(0,3);
lcd.print("STUDENT:LEANDROS P.");  
  delay(100);
}
 lcd.clear();
// lcd.println("GEL SOUDAS");
}


 