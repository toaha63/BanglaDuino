## **BanglaDuino V1.00* for Arduino

**Written by:** Hasin Israk Toaha (SSC 25) 

### **What is the BanglaDuino library.?**

By default, Arduino support only ASCII codes using Serial.print(). But by this library,you can print Bangla in Serial Monitor.

### **How to use it**

Simple! Just install Library, include it and use!

```Arduino

#include<BanglaDuino.h>
void setup()
{
    Serial.begin(9600);
}

void loop()
{
    printBanglaln("আমি আরডুইনোর এটিমেগা ৩২৮পি বলছি।");
    delay(500);
}

```


### **Library functions**
```Arduino
 void printBangla(const char* banglaString);
 //  It print Bangla string which is passed by you and return a void.

void printBanglaln(const char* banglaString);
// Same as printBangla(), but it adds a newline automatic.

int lengthOfBanglaString(const char* yourBanglaString);
 // It takes a Bangla Unicode string or any Unicode string (Not emoji) and return the length of string as int.

String textToMorse(String input);
//It takes a String and convert it to morse code and return it as string

```





✋Limitations:

It has some limitations,it can't print a lerge string of Bangla (if your arduino has a lerger RAM,then you can). It eates a lerge memory in runtime for calculation.Also, you need to select a Bangla Unicode Font (eg, Kalpurush) in serial monitor.I used it in my android 11 tablet with a hc05 Bluetooth module and my custom android app.

![Image of a output by BanglaDuino](https://github.com/toaha63/BanglaDuino/blob/master/Screenshot.png?raw=true)
# BanglaDuino
