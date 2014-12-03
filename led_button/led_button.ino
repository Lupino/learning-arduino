const int LED = 9;    // LED 链接在 9 号引脚
const int BUTTON = 2; // 按键链接在 2 号引脚

void setup() {
    pinMode(LED, OUTPUT);    // 将 LED 引脚设置为输出
    pinMode(BUTTON, INPUT);  // 将按键引脚设置为输入 (不必需)
}

void loop() {
    if (digitalRead(BUTTON) == LOW) {
        digitalWrite(LED, LOW);
    } else {
        digitalWrite(LED, HIGH);
    }
}
