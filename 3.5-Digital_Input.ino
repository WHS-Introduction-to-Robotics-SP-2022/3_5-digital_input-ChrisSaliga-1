int x=7;
int button=1;

void setup() {
    Serial.begin(9600);
    pinMode(x,INPUT);

}

void loop() {

      button=digitalRead(x);
      Serial.println(button);
  delay(100);
}
