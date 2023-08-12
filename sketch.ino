// #define led 5
// #define LED 2

// void setup() {
// pinMode(led, OUTPUT);
// digitalWrite(led, HIGH);
// pinMode(LED, OUTPUT);
// digitalWrite(LED, HIGH);
// Serial.begin(9600);

// }
// void loop() {
//   digitalWrite(led, HIGH);
//   digitalWrite(LED, LOW);
//   delay(100);
//   Serial.print("led on   ");
//   Serial.println("LED off");

//   digitalWrite(led, LOW);
//   digitalWrite(LED, HIGH);
//   delay(100);
//   Serial.print("LED on    ");
//   Serial.println("led off");
// }

// #define led 2

// void setup(){
// pinMode(led, OUTPUT);
// }
// void loop(){
// analogWrite(led, 50);
// delay(1000);
// analogWrite(led, 120);
// delay(1000);
// analogWrite(led, 20);
// delay(1000);
// analogWrite(led, 255);
// delay(1000);
// analogWrite(led, 0);
// delay(1000);
// }

// #define  led 2
// #define  LED 5
// void setup(){
//   pinMode(led, OUTPUT);
//   pinMode(LED, OUTPUT);
// Serial.begin(115200);
// }
// void loop(){
  
// for(int count=0; count < 255; count+=51){
  
// Serial.println(count);
// analogWrite(led, count);
// delay(2000);
// analogWrite(LED, count);
// delay(2000);

// }
// for(int count=255; count > 0; count-=51){
 
// Serial.println(count);
//  analogWrite(led, count);
//  delay(2000);
//  analogWrite(LED, count);
// delay(2000);
// }
// }

#define led 2
void setup() {
Serial.begin(115200);
pinMode(led, OUTPUT);
}
void loop() {
if(Serial.available())
{
String input = Serial.readStringUntil('\n');
if(input == "on")
{
digitalWrite(led, HIGH);
Serial.println("led is turn on");
}
else
if(input == "off")
{
digitalWrite(led, LOW);
Serial.println("led is turn off");
}
}
}


