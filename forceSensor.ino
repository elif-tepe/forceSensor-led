int pressurePin = A0;
int force;
int LEDpin1 = 8;
int LEDpin2 = 9;
int LEDpin3 = 10;
int LEDpin4 = 11;
void setup() {
  Serial.begin(9600);
  pinMode(LEDpin1, OUTPUT);
  pinMode(LEDpin2, OUTPUT);
  pinMode(LEDpin3, OUTPUT);
  pinMode(LEDpin4, OUTPUT);
}
void loop() {
  force = analogRead(pressurePin);
  Serial.println(force);
  digitalWrite(LEDpin1, LOW);
  digitalWrite(LEDpin2, LOW);
  digitalWrite(LEDpin3, LOW);
  digitalWrite(LEDpin4, LOW);
  if (force <10 ){
    Serial.println("No pressure..");
  
  }
  else if (force < 400) {
    digitalWrite(LEDpin1, HIGH);
    
  }
  else if (force < 750) {
    digitalWrite(LEDpin1, HIGH);
    digitalWrite(LEDpin2, HIGH);
  
  }
    else if (force < 900) {
    digitalWrite(LEDpin1, HIGH);
    digitalWrite(LEDpin2, HIGH);
    digitalWrite(LEDpin3, HIGH);
  
  }
  else {
    digitalWrite(LEDpin1, HIGH);
    digitalWrite(LEDpin2, HIGH);
    digitalWrite(LEDpin3, HIGH);
    digitalWrite(LEDpin4, HIGH);
  }
  delay(200);
}
