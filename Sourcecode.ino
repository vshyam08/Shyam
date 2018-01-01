#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int ldr1 = A0; 
int sensorvalue1=0;
const int ldr2=A3;
int sensorvalue2=0;
const int ldr3=A5;
int sensorvalue3=0;
void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() {

  int sensorvalue1= analogRead(ldr1); 
  int sensorvalue2= analogRead(ldr2);
  int sensorvalue3= analogRead(ldr3);
  Serial.println(sensorvalue1);
  Serial.println(sensorvalue2);
  Serial.println(sensorvalue3); 
  
  if((sensorvalue1<300)&&(sensorvalue2<300)&&(sensorvalue3<300))
  {
    lcd.setCursor(1,0);
    lcd.print("STREET1: FAULT");
    delay(1000); 
    lcd.setCursor(1,0);
    lcd.print("STREET2: FAULT");
    delay(1000);  
    lcd.setCursor(1,0);
    lcd.print("STREET3: FAULT");
    delay(1000);  
}
 else if((sensorvalue1<300)&&(sensorvalue2<300))
  {
    lcd.setCursor(1,0);
    lcd.print("STREET1: FAULT");
    delay(1000);
    lcd.setCursor(1,0);
    lcd.print("STREET2: FAULT");
    delay(1000);  
 } 
 else if((sensorvalue3<300)&&(sensorvalue2<300))
  {
    lcd.setCursor(1,0);
    lcd.print("STREET2: FAULT");
    delay(1000); 
    lcd.setCursor(1,0);
    lcd.print("STREET3: FAULT");
    delay(1000);  
 } 
  else if((sensorvalue1<300)&&(sensorvalue3<300))
  {
    lcd.setCursor(1, 0);
    lcd.print("STREET1: FAULT");
    delay(1000);
    lcd.setCursor(1,0);
    lcd.print("STREET3: FAULT");
    delay(1000);  
 }
 else if((sensorvalue1<300))
  {
    lcd.setCursor(1,0);
    lcd.print("STREET1: FAULT");
    delay(1000);  
 } 
  else if((sensorvalue2<300))
  {
    lcd.setCursor(1,0);
    lcd.print("STREET2: FAULT");
    delay(1000);  
 }
  else if((sensorvalue3<300))
  {
    lcd.setCursor(1,0);
    lcd.print("STREET3: FAULT");
    delay(1000);  
 }
 else
 {
   lcd.setCursor(1,0);
   lcd.print("STREET1: GOOD ");
   delay(1000);
   lcd.setCursor(1,0);
   lcd.print("STREET2: GOOD ");
   delay(1000);
   lcd.setCursor(1,0);
   lcd.print("STREET3: GOOD ");
   delay(1000);
 } 
}
