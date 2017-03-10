#include <Keyboard.h>

int button = 7;
int buzzor = 9;
int A = 0;
void setup() {
  Keyboard.begin();
  delay(3000);
  pinMode(button, INPUT_PULLUP);
  pinMode(buzzor, OUTPUT);
  attachInterrupt(4, test, LOW );
}

void loop() {
  if (A == 1) {
    digitalWrite(buzzor, HIGH);
    delay(500);
    digitalWrite(buzzor, LOW);
    A = 0;
  }
}

void test() {
  while (digitalRead(button) == 0) {
  }
  Keyboard.print("아이디");
  Keyboard.write(KEY_TAB);
  Keyboard.print("비밀번호");
  Keyboard.write (KEY_RETURN);
  A = 1;
}
