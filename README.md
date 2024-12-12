## **BanglaDuino V1.00* for Arduino

**Written by:** Hasin Israk Toaha (SSC 25) 

### **What is the BanglaDuino library.?**

By default, Arduino support only ASCII codes using Serial.print(). But by this library,you can print Bangla in Serial Monitor.

### **How to use it**

Simple! Just install Library, include it and use!

```Arduino

#include<BanglaDuino.h>
BanglaDuino banglaDuino;
void setup()
{
    Serial.begin(9600);
}

void loop()
{
    banglaDuino.printBanglaln("আমি আরডুইনোর এটিমেগা ৩২৮পি বলছি।");
    delay(500);
}

```


### **Library functions**
 1)void printBangla(const char* banglaString);
   It print Bangla string which is passed by you and return a void.

2)void printBanglaln(const char* banglaString);
 Same as printBangla(), but it adds a newline automatic.




✋Limitations:

It has some limitations,it can't print a lerge string of Bangla (if your arduino has a lerger RAM,then you can). It eates a lerge memory in runtime for calculation.Also, you need to select a Bangla Unicode Font (eg, Kalpurush) in serial monitor.I used it in my android 11 tablet with a hc05 Bluetooth module and my custom android app.

![Image of a output by BanglaDuino](https://github.com/toaha63/BanglaDuino/blob/master/Screenshot.png?raw=true)
# BanglaDuino
