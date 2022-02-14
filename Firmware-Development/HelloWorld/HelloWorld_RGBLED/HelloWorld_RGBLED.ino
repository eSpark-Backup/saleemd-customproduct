#include <Adafruit_NeoPixel.h>

#define LED_EN1 PA8
#define LED_EN2 PA9
#define LED_EN3 PA10
#define LED_EN4 PB2
#define LED_EN5 PB3

#define PWM2 PB1

#define DELAYVAL 500


#define NUMPIXELS 241 // Popular NeoPixel ring size

Adafruit_NeoPixel pixels(NUMPIXELS, PWM2, NEO_GRB + NEO_KHZ800);


void setup() {
  Serial.begin(115200);

  pinMode(LED_EN1, OUTPUT);
  pinMode(LED_EN2, OUTPUT);
  pinMode(LED_EN3, OUTPUT);
  pinMode(LED_EN4, OUTPUT);
  pinMode(LED_EN5, OUTPUT);

  //  digitalWrite(LED_EN1, HIGH);
  //  digitalWrite(LED_EN2, LOW);
  //  digitalWrite(LED_EN3, HIGH);
  //  digitalWrite(LED_EN4, HIGH);
  //  digitalWrite(LED_EN5, HIGH);

  //digitalWrite(LED_EN2, LOW);

  pixels.begin();

  //setPixels();


}

void loop() {

  Serial.println("HelloWorld");

  digitalWrite(LED_EN2, HIGH);

  delay(2000);

  digitalWrite(LED_EN2, LOW);

  setPixels();

  delay(2000);

}

void setPixels()
{
  for (int z = 240; z > 219; z--)
  {
    pixels.setPixelColor(z, pixels.Color(150, 0, 0)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }
  pixels.show(); // This sends the updated pixel color to the hardware.

  for (int z = 219; z > 147; z--)
  {
    pixels.setPixelColor(z, pixels.Color(150, 0, 0)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }
  pixels.show(); // This sends the updated pixel color to the hardware.

  for (int z = 147; z >= 0; z--)
  {
    pixels.setPixelColor(z, pixels.Color(150, 0, 0)); // Moderately bright green color.
    //pixels.setPixelColor(1, pixels.Color(i * 255, j * 255, k * 255)); // Moderately bright green color.
  }

  pixels.show(); // This sends the updated pixel color to the hardware.
}
