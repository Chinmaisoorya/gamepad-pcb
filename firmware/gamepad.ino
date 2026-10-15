#include <XInput.h>

// Pin mapping —  that is to adjust match your PCB
#define JOY_LX   A0
#define JOY_LY   A1
#define JOY_RX   A2
#define JOY_RY   A3
#define BTN_A    2
#define BTN_B    3
#define BTN_X    4
#define BTN_Y    5

void setup() {
  pinMode(BTN_A, INPUT_PULLUP);
  pinMode(BTN_B, INPUT_PULLUP);
  pinMode(BTN_X, INPUT_PULLUP);
  pinMode(BTN_Y, INPUT_PULLUP);
  XInput.setJoystickRange(0, 1023);
}

void loop() {
  XInput.setJoystick(JOY_LEFT, analogRead(JOY_LX), analogRead(JOY_LY));
  XInput.setJoystick(JOY_RIGHT, analogRead(JOY_RX), analogRead(JOY_RY));

  if (!digitalRead(BTN_A)) XInput.press(BUTTON_A); else XInput.release(BUTTON_A);
  if (!digitalRead(BTN_B)) XInput.press(BUTTON_B); else XInput.release(BUTTON_B);
  if (!digitalRead(BTN_X)) XInput.press(BUTTON_X); else XInput.release(BUTTON_X);
  if (!digitalRead(BTN_Y)) XInput.press(BUTTON_Y); else XInput.release(BUTTON_Y);

  XInput.send();
}
