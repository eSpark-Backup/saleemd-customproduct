#define LED_EN1 PA8
#define LED_EN2 PA9
#define LED_EN3 PA10
#define LED_EN4 PB2
#define LED_EN5 PB3


void setup() {
  Serial.begin(115200);

  pinMode(LED_EN1, OUTPUT);
  pinMode(LED_EN2, OUTPUT);
  pinMode(LED_EN3, OUTPUT);
  pinMode(LED_EN4, OUTPUT);
  pinMode(LED_EN5, OUTPUT);

  digitalWrite(LED_EN1, HIGH);
  digitalWrite(LED_EN2, LOW);
  digitalWrite(LED_EN3, LOW);
  digitalWrite(LED_EN4, LOW);
  digitalWrite(LED_EN5, LOW);

}

void loop() {
  Serial.println("HelloWorld");
  delay(500);

}
