#include <Adafruit_NeoPixel.h>

#define LED_EN1 PA8
#define LED_EN2 PA9
#define LED_EN3 PA10
#define LED_EN4 PB2
#define LED_EN5 PB3

#define BUTTON1 PA0
#define BUTTON2 PA1
#define BUTTON3 PA2
#define BUTTON4 PA3

#define PWM1 PB0
#define PWM2 PB1
#define PWM3 PB4
#define PWM4 PB5
#define PWM5 PB14

#define DELAYVAL 500


#define NUMPIXELS 50 // Popular NeoPixel ring size

Adafruit_NeoPixel pixels1(NUMPIXELS, PWM1, NEO_GRB + NEO_KHZ400);
Adafruit_NeoPixel pixels2(NUMPIXELS, PWM2, NEO_GRB + NEO_KHZ400);
Adafruit_NeoPixel pixels3(NUMPIXELS, PWM3, NEO_GRB + NEO_KHZ400);
Adafruit_NeoPixel pixels5(NUMPIXELS, PWM5, NEO_GRB + NEO_KHZ400);
Adafruit_NeoPixel pixels4(NUMPIXELS, PWM4, NEO_GRB + NEO_KHZ400);


void setup() {
  Serial.begin(115200);

  pinMode(LED_EN1, OUTPUT);
  pinMode(LED_EN2, OUTPUT);
  pinMode(LED_EN3, OUTPUT);
  pinMode(LED_EN4, OUTPUT);
  pinMode(LED_EN5, OUTPUT);

  pinMode(BUTTON1, INPUT_PULLUP);
  pinMode(BUTTON2, INPUT_PULLUP);
  pinMode(BUTTON3, INPUT_PULLUP);
  pinMode(BUTTON4, INPUT_PULLUP);

  pixels1.begin();
  pixels2.begin();
  pixels3.begin();
  pixels4.begin();
  pixels5.begin();


}

void loop() {

  //Serial.println("HelloWorld");

  Serial.println("LEDs turned off");


  digitalWrite(LED_EN1, HIGH);
  digitalWrite(LED_EN2, HIGH);
  digitalWrite(LED_EN3, HIGH);
  digitalWrite(LED_EN5, HIGH);
  digitalWrite(LED_EN4, HIGH);

  delay(5000);

  digitalWrite(LED_EN1, LOW);
  digitalWrite(LED_EN2, LOW);
  digitalWrite(LED_EN3, LOW);
  digitalWrite(LED_EN5, LOW);
  digitalWrite(LED_EN4, LOW);

  setPixels1();
  setPixels2();
  setPixels3();
  setPixels5();
  setPixels4();

  Serial.println("LEDs turned on");

  delay(5000);

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
}

void setPixels1()
{
  for (int z = 240; z > 219; z--)
  {
    pixels1.setPixelColor(z, pixels1.Color(255, 255, 255)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }
  pixels1.show(); // This sends the updated pixel color to the hardware.

  for (int z = 219; z > 147; z--)
  {
    pixels1.setPixelColor(z, pixels1.Color(255, 255, 255)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }
  pixels1.show(); // This sends the updated pixel color to the hardware.

  for (int z = 147; z >= 0; z--)
  {
    pixels1.setPixelColor(z, pixels1.Color(255, 255, 255)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }

  pixels1.show(); // This sends the updated pixel color to the hardware.
}

void setPixels2()
{
  for (int z = 240; z > 219; z--)
  {
    pixels2.setPixelColor(z, pixels2.Color(255, 255, 255)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }
  pixels2.show(); // This sends the updated pixel color to the hardware.

  for (int z = 219; z > 147; z--)
  {
    pixels2.setPixelColor(z, pixels2.Color(255, 255, 255)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }
  pixels2.show(); // This sends the updated pixel color to the hardware.

  for (int z = 147; z >= 0; z--)
  {
    pixels2.setPixelColor(z, pixels2.Color(255, 255, 255)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }

  pixels2.show(); // This sends the updated pixel color to the hardware.
}

void setPixels3()
{
  for (int z = 240; z > 219; z--)
  {
    pixels3.setPixelColor(z, pixels3.Color(255, 255, 255)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }
  pixels3.show(); // This sends the updated pixel color to the hardware.

  for (int z = 219; z > 147; z--)
  {
    pixels3.setPixelColor(z, pixels3.Color(255, 255, 255)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }
  pixels3.show(); // This sends the updated pixel color to the hardware.

  for (int z = 147; z >= 0; z--)
  {
    pixels3.setPixelColor(z, pixels3.Color(255, 255, 255)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }

  pixels3.show(); // This sends the updated pixel color to the hardware.
}

void setPixels5()
{
  for (int z = 240; z > 219; z--)
  {
    pixels5.setPixelColor(z, pixels5.Color(255, 255, 255)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }
  pixels5.show(); // This sends the updated pixel color to the hardware.

  for (int z = 219; z > 147; z--)
  {
    pixels5.setPixelColor(z, pixels5.Color(255, 255, 255)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }
  pixels5.show(); // This sends the updated pixel color to the hardware.

  for (int z = 147; z >= 0; z--)
  {
    pixels5.setPixelColor(z, pixels5.Color(255, 255, 255)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }

  pixels5.show(); // This sends the updated pixel color to the hardware.
}

void setPixels4()
{
  for (int z = 240; z > 219; z--)
  {
    pixels4.setPixelColor(z, pixels4.Color(255, 255, 255)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }
  pixels4.show(); // This sends the updated pixel color to the hardware.

  for (int z = 219; z > 147; z--)
  {
    pixels4.setPixelColor(z, pixels4.Color(255, 255, 255)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }
  pixels4.show(); // This sends the updated pixel color to the hardware.

  for (int z = 147; z >= 0; z--)
  {
    pixels4.setPixelColor(z, pixels4.Color(255, 255, 255)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }

  pixels4  .show(); // This sends the updated pixel color to the hardware.
}
