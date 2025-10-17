//Malaika
//23-ntu-cs-1291
//Week5-PWM-Buzzer
//main.cpp

#include <Arduino.h>

// --- LED setup ---
#define LED_PIN     18
#define LED_CH      0
#define LED_FREQ    5000
#define LED_RES     8

// --- Buzzer setup ---
#define BUZZER_PIN  27
#define BUZZER_CH   1
#define BUZZER_FREQ 2000
#define BUZZER_RES  10

void setup() {
  // --- LED PWM setup ---
  ledcSetup(LED_CH, LED_FREQ, LED_RES);
  ledcAttachPin(LED_PIN, LED_CH);

  // --- Buzzer PWM setup ---
  ledcSetup(BUZZER_CH, BUZZER_FREQ, BUZZER_RES);
  ledcAttachPin(BUZZER_PIN, BUZZER_CH);

  // --- 1. Simple beep pattern ---
  for (int n = 0; n < 3; n++) {
    ledcWriteTone(BUZZER_CH, 2000 + n * 400); // Beep tone
    delay(150);
    ledcWrite(BUZZER_CH, 0);                  // Stop tone
    delay(150);
  }

  // --- 2. Frequency sweep (400Hz → 3kHz) ---
  for (int i = 400; i <= 3000; i += 100) {
    ledcWriteTone(BUZZER_CH, i);
    delay(20);
  }
  ledcWrite(BUZZER_CH, 0);
  delay(500);

  // --- 3. Short melody ---
  int melody[] = {262, 294, 330, 349, 392, 440, 494, 523};
  for (int j = 0; j < 8; j++) {
    ledcWriteTone(BUZZER_CH, melody[j]);
    delay(200);
  }
  ledcWrite(BUZZER_CH, 0); // stop buzzer
}

void loop() {
  // --- LED brightness fade ---
  for (int k = 0; k <= 255; k++) {
    ledcWrite(LED_CH, k);
    delay(15);
  }
  for (int l = 255; l>= 0; l--) {
    ledcWrite(LED_CH, l);
    delay(15);
  }
}