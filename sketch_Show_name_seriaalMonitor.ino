
void setup() {
  Serial.begin(9600);
}

void loop() {

  if (Serial.available()) {
    String name = Serial.readString();
    Serial.print("recieved name:");
    Serial.println(name);
  }
}
