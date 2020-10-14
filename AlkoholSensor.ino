#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
int psl = 5; //PIR sensor low
int red = 3; //led red
int grn = 2; //led grn

void setup() {
  // put your setup code here, to run once:
pinMode(psl, INPUT_PULLUP);
pinMode(red, OUTPUT);
pinMode(grn, OUTPUT);
lcd.begin(20,4);
lcd.setCursor(0,0);
lcd.print("SISTEM PENDETEKSI");
lcd.setCursor(0,1);
lcd.print("ALKOHOL");
lcd.setCursor(0,2);
lcd.print("TELEKOMUNIKASI PNJ");
delay(2000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("SISTEM BY");
lcd.setCursor(0,1);
lcd.print("DHIYAUD DIEN RAIS");
lcd.setCursor(0,2);
lcd.print("1903332072");
delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
int psl_read = digitalRead(psl);
if (psl_read == LOW) {
  lcd.clear();
  lcd.setCursor(0,3);
  lcd.print("ALKOHOL DETECTED");
  digitalWrite(grn, LOW);
  digitalWrite(red, HIGH);
  
}
else {
  lcd.clear();
  lcd.setCursor(0,3);
  lcd.print("ALKOHOL NOT DETECTED");
  digitalWrite(grn, HIGH);
  digitalWrite(red, LOW);
 
}
}
