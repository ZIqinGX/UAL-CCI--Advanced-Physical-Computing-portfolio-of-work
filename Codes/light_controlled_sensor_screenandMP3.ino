



#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"
#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <Adafruit_ST7789.h>
#include <Fonts/FreeSerif12pt7b.h>
#include <Fonts/FreeSansBold9pt7b.h>
#include <Fonts/FreeSans9pt7b.h>
#include <SPI.h>

#define TFT_CS  10 // TFT LCD的CS PIN腳
#define TFT_DC   8 // TFT DC(A0、RS) 
#define TFT_RST  9 // TFT Reset

const int LDR = A0;
int input_val = 0;

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);


SoftwareSerial mySoftwareSerial(6, 7); // tX, rX
DFRobotDFPlayerMini myDFPlayer;
void printDetail(uint8_t type, int value);

void setup()
{
   //Serial.begin(9600);
    tft.initR(INITR_BLACKTAB);  
   mySoftwareSerial.begin(9600);
  Serial.begin(115200);

  
  Serial.println();
  Serial.println(F("DFRobot DFPlayer Mini Demo"));
  Serial.println(F("Initializing DFPlayer ... (May take 3~5 seconds)"));
  
  if (!myDFPlayer.begin(mySoftwareSerial)) {  //Use softwareSerial to communicate with mp3.
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
    while(true){
      delay(0); // Code to compatible with ESP8266 watch dog.
    }
  }
  Serial.println(F("DFPlayer Mini online."));
}

void loop()
{
  input_val = analogRead(LDR);
  Serial.print("LDR Value is: ");
  Serial.println(input_val);
  delay(1000);
  



if (input_val > 100) {
  Serial.println(F("DFPlayer Mini online."));

  myDFPlayer.volume(10);  //Set volume value. From 0 to 30
  myDFPlayer.play(1);  //Play the first mp3
  
//draw fireworks
 tft.setRotation(1);  //螢幕轉向
  tft.fillScreen(ST77XX_BLACK);  //填滿黑色

delay(1000);
  int Px1, Px2, Py1, Py2,Px3,Py3,Px4,Py4,Px5,Py5;

  Px1 = random (20,140);
  Py1 = random (20,60);
   Px2 = random (20,140);
   Py2 = random (80,100);
   Px3 = random (100,150);
   Py3 = random (18,30);
   Px4 = random (30,50);
   Py4 = random (79,120);
   // Fireworks 1
   //START
   tft.fillRect(5,113, 10,10, ST77XX_YELLOW); //烟花1号
  tft.fillRect(0,124,4,4, 0xAD75);  //x,y,w,h,radius,color  烟花2号
  
  delay(500);
  
  tft.fillRect(0,0,160,128,ST77XX_BLACK);
    delay(100);
    
  //Frame TWO
    tft.fillRect(16, 104, 6,6,  0xAD75);//烟花2号
    tft.fillRect(18, 97, 10,10, ST77XX_YELLOW); //烟花1号
    
    delay(500);
    
    tft.fillRect(0,0,160,128,ST77XX_BLACK);
    delay(100);
    
    //FRAME THREE
    tft.fillRect(24, 96, 3,3,  0xE71C);//4号
    tft.fillRect(28, 91, 5,5,  0xE71C);//3号
    tft.fillRect(31, 88, 6,6,  0xAD75);//2号
   tft.fillRect(34, 82, 10,10,  ST77XX_YELLOW);//1号
   
   delay(500);

    tft.fillRect(0,0,160,128,ST77XX_BLACK);
    delay(100);
   
  //FRAME FOUR
   tft.fillRect(28, 94,3,3,  0xE71C);//7号
   tft.fillRect(35, 89,3.7,3.7,  0xE71C);//6号
  tft.fillRect(42, 85,3,3,  0xE71C);//5号
  tft.fillRect(44, 82,4,6,  0xAD75);//4号
  tft.fillRect(50, 77, 5,5,  0xAD75);//3号
 tft.fillRect(53, 74, 6,6,  0xAD75);//2号 
 tft.fillRect(57, 66.4, 10,10,  ST77XX_YELLOW);//1号
delay(500);

    tft.fillRect(0,0,160,128,ST77XX_BLACK);
    delay(100);
    
   //FRAME FIVE
   tft.fillRect(64.7, 66.4,3,3,  0xE71C);//4号
   tft.fillRect(69, 60, 5,5,  0xE71C);//3号
    tft.fillRect(71.6, 57.7, 6,6,  0xAD75);//2号 
    tft.fillRect(75.6, 50, 10,10,  ST77XX_YELLOW);//1号
delay(500);
tft.fillRect(0,0,160,128,ST77XX_BLACK);
    delay(100);
    
  //FRAME SIX
  tft.fillRect(79, 46, 10,10,  0x9460);//1号
  //FRAME Seven
  tft.fillRect(79, 46, 10,10,  0x9CC6);//1号
  delay(100);
tft.fillRect(0,0,160,128,ST77XX_BLACK);
    delay(100);
  //FRAME Eight
   tft.fillRect(90, 39, 5.3,5.3,  ST77XX_YELLOW);//1号
   tft.fillRect(72.9, 39.5, 5.3,5.3,  ST77XX_YELLOW);//2号
    tft.fillRect(90, 56.4,5.3,5.3,  ST77XX_YELLOW);//3号
     tft.fillRect(72.9, 57, 5.3,5.3,  ST77XX_YELLOW);//4号
     delay(90);
     //Frame NIne
      tft.fillRect(78.6, 28.8, 3.8,9.9,  ST77XX_YELLOW);//4号
         tft.fillRect(96.1, 45.5, 9.9,3.8,  ST77XX_YELLOW);//4号
          tft.fillRect(62.6, 52.6, 9.9,3.8,  ST77XX_YELLOW);//4号
           tft.fillRect(85.7, 63.7, 3.8,9.9,  ST77XX_YELLOW);//4号

        tft.fillRect(96.8, 35.3, 3.8,3.8,   0x67BD);//3号
         tft.fillRect(68.7, 35.3, 3.8,3.8,   0x67BD);//3号
          tft.fillRect(68.5, 63.1, 3.8,3.8,   0x67BD);//3号
           tft.fillRect(96.9, 63.0, 3.8,3.8,   0x67BD);//3号
     
       tft.fillRect(90, 39, 5.3,5.3,  ST77XX_YELLOW);//2号
   tft.fillRect(72.9, 39.5, 5.3,5.3,  ST77XX_YELLOW);//2号
    tft.fillRect(90, 56.4,5.3,5.3,  ST77XX_YELLOW);//2号
     tft.fillRect(72.9, 57, 5.3,5.3,  ST77XX_YELLOW);//2号

     tft.fillRect(79, 45.5, 3.8,3.8,   0x67BD);//1号
         tft.fillRect(86.0, 45.5, 3.8,3.8,   0x67BD);//1号
          tft.fillRect(78.7, 52.6, 3.8,3.8,  0x67BD);//1号
           tft.fillRect(86, 52.6, 3.8,3.8,   0x67BD);//1号
delay(1000);





//Color change 0x103D 深蓝色
//GREEN ONE
 tft.fillRect(Px1, Py1, 5.3,5.3, 0x103D);
 delay(200);
 tft.fillRect(Px1, Py1, 5.3,5.3,0xFA60);
 
 //GREEN TWO
   tft.fillRect(Px1+9.09, Py1-9.323, 5.3,5.3,  0x103D);//1号
   tft.fillRect(Px1-8.01, Py1-8.823, 5.3,5.3,  0x103D);//2号
    tft.fillRect(Px1+9.09, Py1+8.077,5.3,5.3,  0x103D);//3号
     tft.fillRect(Px1-8.01, Py1+8.677, 5.3,5.3,  0x103D);//4号
     delay(90);
//GREEN THREE Px1=80.91, Py1=48.323
      tft.fillRect(Px1-2.31, Py1-19.523, 3.8,9.9,  0x103D);//4号
      tft.fillRect(Px1+15.19, Py1-2.823, 9.9,3.8,  0x103D);//4号
      tft.fillRect(Px1-18.31, Py1+4.277, 9.9,3.8, 0x103D);//4号
       tft.fillRect(Px1+4.79, Py1+15.377, 3.8,9.9, 0x103D);//4号

        tft.fillRect(Px1+15.89, Py1-13.023, 3.8,3.8,0xFCA0);//3号
        tft.fillRect(Px1-12.21, Py1-13.023, 3.8,3.8,0xFCA0);//3号
        tft.fillRect(Px1-12.41, Py1+14.777, 3.8,3.8, 0xFCA0);//3号
        tft.fillRect(Px1+15.99, Py1+14.677, 3.8,3.8, 0xFCA0);//3号
     
       tft.fillRect(Px1+9.09, Py1-9.323, 5.3,5.3,  0x103D);//2号
      tft.fillRect(Px1-8.01, Py1-8.823, 5.3,5.3,  0x103D);//2号
      tft.fillRect(Px1+9.09, Py1+8.077,5.3,5.3,  0x103D);//2号
      tft.fillRect(Px1-8.01, Py1+8.677, 5.3,5.3,  0x103D);//2号

     tft.fillRect(Px1-1.91, Py1-2.823, 3.8,3.8,  0xFCA0);//1号
      tft.fillRect(Px1+5.09, Py1-2.823, 3.8,3.8,  0xFCA0);//1号
      tft.fillRect(Px1-2.21, Py1+4.277, 3.8,3.8, 0xFCA0);//1号
     tft.fillRect(Px1+5.09, Py1+4.277, 3.8,3.8,  0xFCA0);//1号







//Color change  0x4E1C  0x0601 蓝色

 tft.fillRect(Px2, Py2, 5.3,5.3,  0x4E1C);
 delay(200);
 tft.fillRect(Px2, Py2, 5.3,5.3, ST77XX_BLACK);
//Frame 8
   tft.fillRect(Px2+9.09, Py2-9.323, 5.3,5.3,  0x4E1C);//1号
   tft.fillRect(Px2-8.01, Py2-8.823, 5.3,5.3,  0x4E1C);//2号
    tft.fillRect(Px2+9.09, Py2+8.077,5.3,5.3,   0x4E1C);//3号
     tft.fillRect(Px2-8.01, Py2+8.677, 5.3,5.3,  0x4E1C);//4号
     delay(90);
     //Frame NIne Px1=80.91, Py1=48.323
      tft.fillRect(Px2-2.31, Py2-19.523, 3.8,9.9,   0x4E1C);
      tft.fillRect(Px2+15.19, Py2-2.823, 9.9,3.8,  0x4E1C);
      tft.fillRect(Px2-18.31, Py2+4.277, 9.9,3.8,   0x4E1C);
       tft.fillRect(Px2+4.79, Py2+15.377, 3.8,9.9,  0x4E1C);

        tft.fillRect(Px2+15.89, Py2-13.023, 3.8,3.8,  0x4E1C);//3号
        tft.fillRect(Px2-12.21, Py2-13.023, 3.8,3.8,  0x4E1C);//3号
        tft.fillRect(Px2-12.41, Py2+14.777, 3.8,3.8,   0x4E1C);//3号
        tft.fillRect(Px2+15.99, Py2+14.677, 3.8,3.8,   0x4E1C);//3号

        tft.fillRect(Px2+9.09, Py2-9.323, 5.3,5.3,   0x0601);//2号
      tft.fillRect(Px2-8.01, Py2-8.823, 5.3,5.3,   0x0601);//2号
      tft.fillRect(Px2+9.09, Py2+8.077,5.3,5.3,   0x0601);//2号
      tft.fillRect(Px2-8.01, Py2+8.677, 5.3,5.3,   0x0601);//2号

      tft.fillRect(Px2-1.91, Py2-2.823, 3.8,3.8, 0xEBA0);//1号
      tft.fillRect(Px2+5.09, Py2-2.823, 3.8,3.8,  0xEBA0);//1号
      tft.fillRect(Px2-2.21, Py2+4.277, 3.8,3.8, 0xEBA0);//1号
     tft.fillRect(Px2+5.09, Py2+4.277, 3.8,3.8,  0xEBA0);//1号

//Color change  0xF38E pink

 tft.fillRect(Px3, Py3, 5.3,5.3,   0xF479);
 delay(200);
 tft.fillRect(Px3, Py3, 5.3,5.3, 0xFFFF);
//Frame 8
   tft.fillRect(Px3+9.09, Py3-9.323, 5.3,5.3,  0xF479);//1号
   tft.fillRect(Px3-8.01, Py3-8.823, 5.3,5.3,  0xF479);//2号
    tft.fillRect(Px3+9.09, Py3+8.077,5.3,5.3,   0xF479);//3号
     tft.fillRect(Px3-8.01, Py3+8.677, 5.3,5.3,  0xF479);//4号
     delay(90);
    // Frame NIne 
      tft.fillRect(Px3-2.31, Py3-19.523, 3.8,9.9,   0xFFFF);//4号
      tft.fillRect(Px3+15.19, Py3-2.823, 9.9,3.8,   0xFFFF);//4号
      tft.fillRect(Px3-18.31, Py3+4.277, 9.9,3.8,   0xFFFF);//4号
       tft.fillRect(Px3+4.79, Py3+15.377, 3.8,9.9,  0xFFFF);//4号

        tft.fillRect(Px3+15.89, Py3-13.023, 3.8,3.8, 0xFFFF);//3号
        tft.fillRect(Px3-12.21, Py3-13.023, 3.8,3.8,0xFFFF);//3号
        tft.fillRect(Px3-12.41, Py3+14.777, 3.8,3.8,0xFFFF);//3号
        tft.fillRect(Px3+15.99, Py3+14.677, 3.8,3.8,0xFFFF);//3号

        tft.fillRect(Px3+9.09, Py3-9.323, 5.3,5.3, 0xF38E);//2号
      tft.fillRect(Px3-8.01, Py3-8.823, 5.3,5.3,0xF38E);//2号
      tft.fillRect(Px3+9.09, Py3+8.077,5.3,5.3, 0xF38E);//2号
      tft.fillRect(Px3-8.01, Py3+8.677, 5.3,5.3,0xF38E);//2号

      tft.fillRect(Px3-1.91, Py3-2.823, 3.8,3.8,0xE061);//1号
      tft.fillRect(Px3+5.09, Py3-2.823, 3.8,3.8, 0xE061);//1号
      tft.fillRect(Px3-2.21, Py3+4.277, 3.8,3.8, 0xE061);//1号
     tft.fillRect(Px3+5.09, Py3+4.277, 3.8,3.8, 0xE061);//1号



//Color change  0xA01F Purple

 tft.fillRect(Px4, Py4, 5.3,5.3,   0xF479);
 delay(200);
 tft.fillRect(Px4, Py4, 5.3,5.3, 0xF38E);
//Frame 8
   tft.fillRect(Px4+9.09, Py4-9.323, 5.3,5.3,  0xF479);//1号
   tft.fillRect(Px4-8.01, Py4-8.823, 5.3,5.3,  0xF479);//2号
    tft.fillRect(Px4+9.09, Py4+8.077,5.3,5.3,   0xF479);//3号
     tft.fillRect(Px4-8.01, Py4+8.677, 5.3,5.3,  0xF479);//4号
     delay(90);
     //Frame NIne 
      tft.fillRect(Px4-2.31, Py4-19.523, 3.8,9.9,   0xA01F);//4号
      tft.fillRect(Px4+15.19, Py4-2.823, 9.9,3.8,   0xA01F);//4号
      tft.fillRect(Px4-18.31, Py4+4.277, 9.9,3.8,   0xA01F);//4号
       tft.fillRect(Px4+4.79, Py4+15.377, 3.8,9.9, 0xA01F);//4号

        tft.fillRect(Px4+15.89, Py4-13.023, 3.8,3.8, 0xA01F);//3号
        tft.fillRect(Px4-12.21, Py4-13.023, 3.8,3.8,0xA01F);//3号
        tft.fillRect(Px4-12.41, Py4+14.777, 3.8,3.8,0xA01F);//3号
        tft.fillRect(Px4+15.99, Py4+14.677, 3.8,3.8,0xA01F);//3号

        tft.fillRect(Px4+9.09, Py4-9.323, 5.3,5.3, 0xF38E);//2号
      tft.fillRect(Px4-8.01, Py4-8.823, 5.3,5.3,0xF38E);//2号
      tft.fillRect(Px4+9.09, Py4+8.077,5.3,5.3, 0xF38E);//2号
      tft.fillRect(Px4-8.01, Py4+8.677, 5.3,5.3,0xF38E);//2号

      tft.fillRect(Px4-1.91, Py4-2.823, 3.8,3.8,0xE061);//1号
      tft.fillRect(Px4+5.09, Py4-2.823, 3.8,3.8, 0xE061);//1号
      tft.fillRect(Px4-2.21, Py4+4.277, 3.8,3.8, 0xE061);//1号
     tft.fillRect(Px4+5.09, Py4+4.277, 3.8,3.8, 0xE061);//1号







delay(1000);
}else{ tft.fillScreen(ST77XX_BLACK);  //填滿黑色
 
 
 
 
 
 
 
 }
 


}
