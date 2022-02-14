#include <Adafruit_NeoPixel.h>

#define LED_EN1 PA8
#define LED_EN2 PA9
#define LED_EN3 PA10
#define LED_EN4 PB2
#define LED_EN5 PB3

#define PWM2 PB1
#define PWM3 PB4
#define PWM4 PB5
#define PWM5 PB14

#define DELAYVAL 500


#define NUMPIXELS 100 // Popular NeoPixel ring size

Adafruit_NeoPixel pixels(NUMPIXELS, PWM2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels2(NUMPIXELS, PWM5, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels3(NUMPIXELS, PWM4, NEO_GRB + NEO_KHZ800);


void setup() {
  Serial.begin(115200);

  pinMode(LED_EN1, OUTPUT);
  pinMode(LED_EN2, OUTPUT);
  pinMode(LED_EN3, OUTPUT);
  pinMode(LED_EN4, OUTPUT);
  pinMode(LED_EN5, OUTPUT);

  //  digitalWrite(LED_EN1, HIGH);
  //  digitalWrite(LED_EN2, LOW);
  //digitalWrite(LED_EN4, LOW);
  //  digitalWrite(LED_EN4, HIGH);
  //  digitalWrite(LED_EN5, HIGH);

  //digitalWrite(LED_EN2, LOW);

  pixels.begin();
  pixels2.begin();
  pixels3.begin();

  //setPixels3();


}

void loop() {

  Serial.println("HelloWorld");

  digitalWrite(LED_EN2, HIGH);

  delay(2500);

  digitalWrite(LED_EN2, LOW);

  setPixels1();

  delay(2500);

  digitalWrite(LED_EN2, HIGH);

  //

  digitalWrite(LED_EN5, HIGH);

  delay(2500);

  digitalWrite(LED_EN5, LOW);

  setPixels2();

  delay(2500);

  digitalWrite(LED_EN5, HIGH);

  //

  digitalWrite(LED_EN4, HIGH);

  delay(2500);

  digitalWrite(LED_EN4, LOW);

  setPixels3();

  delay(2500);

  digitalWrite(LED_EN4, HIGH);

  //  digitalWrite(LED_EN2, HIGH);
  //  digitalWrite(LED_EN3, HIGH);
  //  digitalWrite(LED_EN4, HIGH);
  //
  //  delay(2000);
  //
  //  digitalWrite(LED_EN2, LOW);
  //  digitalWrite(LED_EN3, LOW);
  //  digitalWrite(LED_EN4, LOW);
  //
  //  setPixels1();
  //  setPixels2();
  //  setPixels3();

  //delay(2000);

}

void setPixels1()
{
  for (int z = 240; z > 219; z--)
  {
    pixels.setPixelColor(z, pixels.Color(255, 255, 255)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }
  pixels.show(); // This sends the updated pixel color to the hardware.

  for (int z = 219; z > 147; z--)
  {
    pixels.setPixelColor(z, pixels.Color(255, 255, 255)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }
  pixels.show(); // This sends the updated pixel color to the hardware.

  for (int z = 147; z >= 0; z--)
  {
    pixels.setPixelColor(z, pixels.Color(255, 255, 255)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }

  pixels.show(); // This sends the updated pixel color to the hardware.
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
