const int ledpin = 13;
const int buttonpin = 2;
void setup() {
  pinMode (ledpin,OUTPUT);
  pinMode (buttonpin, INPUT_PULLUP);
}

void loop() {
  int buttonstate = digitalRead(buttonpin);
  
  if (buttonstate == LOW) {
    digitalWrite(ledpin , HIGH);
  }

  else{
    digitalWrite(ledpin , LOW);
  }

}
