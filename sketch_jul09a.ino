

int pin2 = 5;

int unit = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   dot();
   dot();
   dot();
   dot();
   delay(unit*2);
   dot();
   delay(1000);
   dot();
   dash();
   dot();
   dot();
   delay(1000);
   dot();
   dash();
   dot();
   dot();
   delay(1000);
   dash();
   dash();
   dash();

   
   delay(3000);
   dot();
   dot();
   dot();
   dot();
   delay(1000);
   dot();
   dash();
   delay(1000);
   dot();
   dot();
   dot();
   dash();
   delay(1000);
   dot();
   delay(3000);
   
   dot();
   dot();
   dash();
   dot();
   delay(1000);
   dot();
   dot();
   dash();
   delay(1000);
   dash();
   dot();
   delay(10000);

}

void dot() {
  digitalWrite(pin2, HIGH);
  delay(500);
  digitalWrite(pin2, LOW);
  delay(500);
}

void dash() {
  digitalWrite(pin2, HIGH);
  delay(1500);
  digitalWrite(pin2, LOW);
  delay(500);
}

