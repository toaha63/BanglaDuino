/*

Library BanglaDuino written by Hasin Israk Toaha in 11/12/2024 .

This Sketch written in 13/11/2024

Author,Maintainer: Hasin Israk Toaha

Contact: toaha.banaripara@gmail.com


*/

//Connect your Arduino to your computer and upload it.

#include<BanglaDuino.h>
void setup()
{
    Serial.begin(115200); //set baud rate
}
void loop()
{
    String text = "আমি বাংলায় গান গাই।";   //your Unicode text without emojis
    
    int length = lengthOfBanglaString(text.c_str());  //conversation to char* and pass to function lengthOfBanglaString() 
    
    Serial.print("Length is: " + length);
    
    delay(500);
}