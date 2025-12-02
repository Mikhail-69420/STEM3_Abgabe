const int ledPin1 = 26;
const int ledPin2 = 25;
const int ledPin3 = 32;
const int ledPin4 = 33;
const long BAUDRATE = 115200;

String incomingCommand = "";

void setup() {
  Serial.begin(BAUDRATE);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char receivedChar = Serial.read();

    if (receivedChar == '1') {
      open_palm();
    }
    if (receivedChar == '2') {
      closed_fist();
    }
    if (receivedChar == '3') {
      victory();
    }
    if (receivedChar == '4') {
      point_up();
    }
  }
}

void open_palm() {
  digitalWrite(ledPin1, HIGH);
  delay(5000);
  digitalWrite(ledPin1, LOW);
}

void closed_fist() {
  digitalWrite(ledPin2, HIGH);
  delay(5000);
  digitalWrite(ledPin2, LOW);
}

void victory() {
  digitalWrite(ledPin3, HIGH);
  delay(5000);
  digitalWrite(ledPin3, LOW);
}

void point_up() {
  digitalWrite(ledPin4, HIGH);
  delay(5000);
  digitalWrite(ledPin4, LOW);
}