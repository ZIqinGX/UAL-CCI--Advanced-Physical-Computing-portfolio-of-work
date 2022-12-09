const int BUTTON = 2;
const int LED = 13;
const int SOUND_PIN = A0;
int BUTTONstate = 0;

int val = 0;
int old_val = 0;
int state = 0;

void setup() {
    // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
    pinMode(BUTTON, INPUT);
     Serial.begin(9600);
}

void loop() {
    // put your main code here, to run repeatedly:
    val = digitalRead(BUTTON);
    if (val == HIGH && old_val == LOW) { 
      state = 1 - state;
      delay(10); // 加入延迟以克服杂波
    }
    old_val = val;

    if (state == 1) {
      Serial.println("pressed");
      digitalWrite(LED, HIGH);
    } else {
      digitalWrite(LED, LOW);
    }

switch (state == 1) {
  case 1:

    // 读取A0模拟信号
  int value = analogRead(SOUND_PIN);
  // 输出信号值
  Serial.println(value);
  if(value > 100){
    // 大于阈值，则想引脚13输出低电平，LED灭
    digitalWrite(LED, LOW);
    delay(10000);
  }else{
    // 小于阈值，则想引脚13输出高电平，LED亮
    digitalWrite(LED, HIGH);
    delay(100);
  }
    //do something when var equals 1
    break;
  //case 2:
    //do something when var equals 2
    break;
  //default:
    // if nothing else matches, do the default
    // default is optional
    //break;
    delay(100);
}
