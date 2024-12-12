/*

Library BanglaDuino written by Hasin Israk Toaha in 11/12/2024 .
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
    printBanglaln("আমি আরডুইনোর এটিমেগা ৩২৮পি বলছি।");
    delay(500);
}
