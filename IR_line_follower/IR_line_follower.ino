/* 
 Demo code for using IR_sensors.

 Datasheet for TCRT5000
 *  
 *  
 *   
 */

#define leftIR A2
#define rightIR A3
//uses A2, A3 as in

void setup() {
  // put your setup code here, to run once:
  pinMode(leftIR, INPUT);
  pinMode(rightIR, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("\nLeft:");
  Serial.print(digitalRead(leftIR));
  Serial.print("\nRight:");
  Serial.print(digitalRead(rightIR));
  delay(1000);

}
