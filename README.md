## **BanglaDuino V1.0.2* for Arduino

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

1)
```Arduino
 void printBangla(const char* banglaString);
 //  It print Bangla string which is passed by you and return a void.
```

2)
```Arduino
void printBanglaln(const char* banglaString);
// Same as printBangla(), but it adds a newline automatic.
```

3)
```Arduino
int lengthOfBanglaString(const char* yourBanglaString);
 // It takes a Bangla Unicode string or any Unicode string (Not emoji) and return the length of string as int.
```

4)
```Arduino
String textToMorse(String input);
//It takes a String and convert it to morse code and return it as string

```

5)
```Arduino
String morseToText(String morseCode)
//It takes a String of morse code and decode it into normal English and return the sentence or character as a string

```

6)
```Arduino
String base64_encode(const String &input);
 //It takes a normal string and convert it into base64, then return encoded data as string.It can encode Bangla strings
 ```
 
 7)
 ```Arduino
String base64_decode(const String &input);
//It takes a encoded base64 string and decode it,after decode, return the Normal text as string.It can decode Bangla string.
```
8)
```Arduino
String textToBin(const String);
//It takes s string of text and convert it to binary,then it returns the binary as a string.
```
9) 
```Arduino
String binToText(const String);
//It takes a binary value as string and decode it to normal string. It supports Unicode. It returns text after successfully decode.
```
10)
```
void printAllUnicodeChars(int);

/*It takes a int as millisecond,it means it print all unicode chars but passed delay.
Example: printAllUnicodeChars(100); here, it print each Unicode characters after 100ms gap.*/
```


✋Limitations:

It has some limitations,it can't print a lerge string of Bangla (if your arduino has a lerger RAM,then you can). It eates a lerge memory in runtime for calculation.Also, you need to select a Bangla Unicode Font (eg, Kalpurush) in serial monitor.I used it in my android 11 tablet with a hc05 Bluetooth module and my custom android app.

![Image of a output by BanglaDuino](https://github.com/toaha63/BanglaDuino/blob/master/Screenshot.png?raw=true)
# BanglaDuino





### **License**
This library under ![MIT LICENSE](https://github.com/toaha63/BanglaDuino/blob/master/LICENSE)


