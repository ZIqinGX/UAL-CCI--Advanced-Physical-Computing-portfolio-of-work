# Project description

### Project name

Firework installation

### Background 
Welcome to this creative project I made for term one. It is an electrical firework installation with out using real fire to lit.
It is based on the background that in Chinese, these days in most city, people are not allowed to set off fireworks because it will polluting the air and may cause fire hazard, however it is our tradition to set fireworks to celebrate new year. So I want to make an electrical fireworks installation so that people can enjoy any time any where.

### Four Inputs and four outputs and ineractive process introduction
The whole interaction process can be divided into three main parts.First is how to light the fake fire. Second is how to show fireworks. Finally,how to extinguish the fake fire. To answer these questions. I used four inputs which are button status, Microphone sensor value, NFC tag UID number and light value read by light conrolled resistor and four outputs including includes LED, ws2818b LED strip, ST7735 screen, DF MP3 palyer. 

The first part has two inputs and one output is button and microphone sensor to control LED. Press the button to start the LED which represents fake fire. The LED will keep lighting until user blow towards microphone sensor. When this action is dected, LED will turn off， which means fake fire has been blowed.

The second part is light the "fireworks"

The Final part is how to show fireworks. ST7735 OLED screen was chosen to show animation of fireworks as output and there is an DF player can play sound of fireworks exploded as anouther output. These two outputs share the same input that is the value of light controlled resistor. Animation and sound will be played When light controlled resistor sense the light stronger than the setting number.

### Equipments
Button x1 
LED orange x1
WS2818b LED strip x1
NFC tag x1
RFID reader-RC522 x1
Microphone sensor x1
ST7735 OLED screen x1
DF MP3player x1
Jump wires xN
Resistor 220ohm x1 1k x2

### Advantages
1.Environment friendly

The most important use of this installation is it is enviorment friendly and can replace traditional action of set fireworks to memorize people we care to some extent thus release the burden of air condition.

2.Entertainment

It can also be used to entertainment and enjoy electrical fireworks at any where any time you like.

3.Resource Saved

In the future, it may save a lot of resource used to make fireworks such as paper.

4.Safety

This installation can prevent fire hazard because of it do not need real fire to light.

### Future possibility
This project still requires a lot of work to improve. First is in the future, I want to change the way it shows fireworks from screen into projection because it looks more overwhleming.Besides, I am going to change myanimation programming so that fireworks can be more random. Third, I am going to add more inputs such as ultrasonic sensor and color sensor to make it more interatcive and more flexible.Finally, the size of installation should be reconsidered based on different using senario.  

### Reference
Here are all links that helps me when doing this porject:

https://create.arduino.cc/projecthub/krivanja/working-with-an-led-and-a-push-button-71d8c1
https://blog.csdn.net/u010921682/article/details/121627288
https://roboindia.com/tutorials/arduino-nano-digital-input-push-button/
https://blog.csdn.net/u010921682/article/details/121627288
https://forum.arduino.cc/t/rfid-mfrc522-h-wont-work-with-new-arduino-uno-wifi-rev2/560861
https://randomnerdtutorials.com/security-access-using-mfrc522-rfid-reader-with-arduino/
https://www.bilibili.com/video/BV1zt411e7Hk/?spm_id_from=333.337.search-card.all.click&vd_source=c70028e487e853e784c31fc42e0454a8
https://github.com/FastLED/FastLED/ 
https://www.bilibili.com/video/BV1Z7411p7QV/?spm_id_from=333.788.recommend_more_video.-1&vd_source=c70028e487e853e784c31fc42e0454a8 
https://forum.arduino.cc/t/uno-using-5v-and-3-3v-pins-at-the-same-time/984126 
https://www.circuitgeeks.com/ws2812b-addressable-rgb-led-strip-with-arduino/ 
https://howtomechatronics.com/tutorials/arduino/how-to-control-ws2812b-individually-addressable-leds-using-arduino/ 
https://lingshunlab.com/book/arduino/arduino-uno-turn-on-ws2812b-color-leds 
https://www.qutaojiao.com/24170.html 
https://create.arduino.cc/projecthub/krivanja/working-with-light-dependent-resistor-ldr-1ded4f
http://programmermagazine.github.io/201401/htm/article1.html
https://www.electronics-lab.com/project/using-st7735-1-8-color-tft-display-arduino/
https://diyusthad.com/image2cpp
https://forum.arduino.cc/t/arduino-hex-ie-0xfb00-color-chart/356353/3 
https://diyusthad.com/2019/02/display-images-in-oled-display.html 
https://arduinogetstarted.com/tutorials/arduino-rfid-nfc
https://www.arduino.cc/reference/en/ 

### Reference code from
https://arduinogetstarted.com/tutorials/arduino-rfid-nfc-relay
https://circuitdigest.com/microcontroller-projects/interfacing-rfid-reader-module-with-arduino
https://randomnerdtutorials.com/security-access-using-mfrc522-rfid-reader-with-arduino/ 
https://arduinogetstarted.com/tutorials/arduino-rfid-nfc-relay 
https://blog.jmaker.com.tw/arduino-st7735/ 
https://sensorkit.joy-it.net/en/sensors/ky-037
https://electropeak.com/learn/interfacing-ky-037-sound-sensor-with-arduino/ 
https://circuitdigest.com/microcontroller-projects/interfacing-sound-sensor-with-arduino
https://www.jianshu.com/p/c06d7057edab
