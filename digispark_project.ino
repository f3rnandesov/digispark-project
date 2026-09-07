#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(1000);

  DigiKeyboard.sendKeyStroke(KEY_T, MOD_GUI_LEFT);

  DigiKeyboard.delay(1000);

  DigiKeyboard.print("ls");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
}