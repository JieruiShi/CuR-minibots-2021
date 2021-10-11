#define AIN1 9
#define AIN2 8
#define PWMA 10
#define BIN1 6
#define BIN2 7
#define PWMB 11

void setup() {
  // put your setup code here, to run once:
  digitalWrite(AIN1,HIGH);
  digitalWrite(AIN2,LOW);
  analogWrite(PWMA,100);
  digitalWrite(BIN1,HIGH);
  digitalWrite(BIN2,LOW);
  analogWrite(PWMB,100);
}

void loop() {
  // put your main code here, to run repeatedly:
}
