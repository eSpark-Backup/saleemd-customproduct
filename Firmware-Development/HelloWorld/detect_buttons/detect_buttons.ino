#define BUTTON1 PA0
#define BUTTON2 PA1
#define BUTTON3 PA2
#define BUTTON4 PA3

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  pinMode(BUTTON1, INPUT_PULLUP);
  pinMode(BUTTON2, INPUT_PULLUP);
  pinMode(BUTTON3, INPUT_PULLUP);
  pinMode(BUTTON4, INPUT_PULLUP);
}


void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(BUTTON1) == LOW)
  {
    Serial.println("Button1 triggered!");
  } else
  {
    Serial.println("Button1 not triggered");
  }

  if (digitalRead(BUTTON2) == LOW)
  {
    Serial.println("Button2 triggered!");
  } else
  {
    Serial.println("Button2 not triggered");
  }

  if (digitalRead(BUTTON3) == LOW)
  {
    Serial.println("Button3 triggered!");
  } else
  {
    Serial.println("Button3 not triggered");
  }

  if (digitalRead(BUTTON4) == LOW)
  {
    Serial.println("Button4 triggered!");
  } else
  {
    Serial.println("Button4 not triggered");
  }

  delay(200);
  
}
