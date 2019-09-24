#include <SoftwareSerial.h>
SoftwareSerial SIM900(7,8);
void setup() {
  //encendido SIM900
  //digitalWrite(9, HIGH);
  //delay(1000);
  //digitalWrite(9, LOW);
  //delay(5000);
  SIM900.begin(19200);
  Serial.begin(19200);
  delay(20000);
  llamar();
}

void loop() {
  // put your main code here, to run repeatedly:

}
void llamar(){
  SIM900.print("ATD");
  SIM900.print("+56997737271");
  SIM900.println(";");
  Serial.println("llamando...");
  delay(25000);
  SIM900.println("ATH");
  Serial.println("finalizado");
}
