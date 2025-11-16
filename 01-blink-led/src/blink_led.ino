constexpr int kLedPin = 8;        
constexpr unsigned long kOnMs = 500;
constexpr unsigned long kOffMs = 500;

void setup() {
  pinMode(kLedPin, OUTPUT);
  digitalWrite(kLedPin, LOW);
}

void loop() {
  digitalWrite(kLedPin, HIGH);
  delay(kOnMs);
  digitalWrite(kLedPin, LOW);
  delay(kOffMs);
}
