const int LED = 9;          // LED 链接在 9 号引脚
const int BUTTON = 2;       // 按键链接在 2 号引脚
boolean lastButton = LOW;   // 保存前一个按键的状态
boolean currentButton = LOW; // 保存当前按键的状态
boolean ledOn = false;  // LED 当前状态 (开／关)

void setup() {
    pinMode(LED, OUTPUT);    // 将 LED 引脚设置为输出
    pinMode(BUTTON, INPUT);  // 将按键引脚设置为输入 (不必需)
}

/*
 * 消除滑动函数
 * 传入前一个输入按键状态，返回当前消除抖动的按键状态
 */

boolean debounce(boolean last) {
    boolean current = digitalRead(BUTTON); //  读取按键状态
    if (last != current) {
        delay(5); // 等待 5 ms
        current = digitalRead(BUTTON); // 再次读取
    }

    return current; // 返回当前值
}

void loop() {
    currentButton = debounce(lastButton); // 读取消除抖动状态
    if (lastButton == LOW && currentButton == HIGH) { // 如果按键被按下
        ledOn = !ledOn; // 翻转 LED 值
    }
    lastButton = currentButton; // 重置按键值
    digitalWrite(LED, ledOn);   // 改变 LED 的状态
}
