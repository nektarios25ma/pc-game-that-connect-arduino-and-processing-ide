int echoPin = 12; // Echo Pin
int trigPin = 13; // Trigger Pin
int maximumRange = 350; // Maximum range needed
int minimumRange = 2; // Minimum range needed
long duration, distance; // Duration used to calculate distance
void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);
}
void loop() {
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
}
