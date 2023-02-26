
int pot2; // Δημιούργησε μια ακέραια μεταβλητή pot
int toSend;
void setup() {
   
   Serial.begin(9600);  // Ξεκίνα το σειριακό μόνιτορ
}

void loop() {

 pot2=analogRead(A0);  // αποθήκευσε στη μεταβλητή pot την τιμή που διάβασες από την αναλογική είσοδο A0


  toSend = map (pot2, 0, 1023, 0, 255);             // the data from potenciometer mapped to form a byte

  Serial.write (toSend);
//Serial.println(toSend);
  delay(100);


   
}

