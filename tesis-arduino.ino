char incomingByte = 0; // for incoming serial data

void setup() {
  Serial.begin(9600); //initialize serial communication at a 9600 baud rate
  Serial.print("Inicializando uart: \n");
  print();
}

void loop() {
  // send data only when you receive data:
  while(Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();

    // say what you got:
    Serial.print(incomingByte);
  }
  delay(500);
  Serial.println("\n ----- \n");
}