/*

Library BanglaDuino written by Hasin Israk Toaha in 11/12/2024 .
Author,Maintainer: Hasin Israk Toaha

Contact: toaha.banaripara@gmail.com

*/


#include<avr/pgmspace.h>
#include"BanglaDuino.h"

struct BanglaCharacter
{
    const char* unicode;
};
const BanglaCharacter banglaCharacters[] PROGMEM =
{
    /* অ */ {"\xE0\xA6\x85"},
    /* আ */ {"\xE0\xA6\x86"},
    /* ই */ {"\xE0\xA6\x87"},
    /* ঈ */ {"\xE0\xA6\x88"},
    /* উ */ {"\xE0\xA6\x89"},
    /* ঊ */ {"\xE0\xA6\x8A"},
    /* ঋ */ {"\xE0\xA7\x83"},
    /* এ */ {"\xE0\xA6\x8F"},
    /* ঐ */ {"\xE0\xA6\x90"},
    /* ও */ {"\xE0\xA6\x93"},
    /* ঔ */ {"\xE0\xA6\x94"},
    /* ক */ {"\xE0\xA6\x95"},
    /* খ */ {"\xE0\xA6\x96"},
    /* গ */ {"\xE0\xA6\x97"},
    /* ঘ */ {"\xE0\xA6\x98"},
    /* ঙ */ {"\xE0\xA6\x99"},
    /* চ */ {"\xE0\xA6\xA4"},
    /* ছ */ {"\xE0\xA6\xB8"},
    /* জ */ {"\xE0\xA6\x9C"},
    /* ঝ */ {"\xE0\xA6\x9D"},
    /* ঞ */ {"\xE0\xA6\x9E"},
    /* ট */ {"\xE0\xA6\x9F"},
    /* ঠ */ {"\xE0\xA6\xA0"},
    /* ড */ {"\xE0\xA6\xA1"},
    /* ঢ */ {"\xE0\xA6\xA2"},
    /* ণ */ {"\xE0\xA6\xA3"},
    /* ড় */ {"\xE0\xA6\x9C\xE0\xA7\x9C"},
    /* ঢ */ {"\xE0\xA6\x9C\xE0\xA7\x9D"},
    /* ত */ {"\xE0\xA6\xA4"},
    /* থ */ {"\xE0\xA6\xA5"},
    /* দ */ {"\xE0\xA6\xA6"},
    /* ধ */ {"\xE0\xA6\xA7"},
    /* ন */ {"\xE0\xA6\xA8"},
    /* প */ {"\xE0\xA6\xAA"},
    /* ফ */ {"\xE0\xA6\xAB"},
    /* ব */ {"\xE0\xA6\xAC"},
    /* ভ */ {"\xE0\xA6\xAD"},
    /* ম */ {"\xE0\xA6\xAE"},
    /* য */ {"\xE0\xA6\xAF"},
    /* র */ {"\xE0\xA6\xB0"},
    /* ল */ {"\xE0\xA6\xB2"},
    /* শ */ {"\xE0\xA6\xB6"},
    /* ষ */ {"\xE0\xA6\xB7"},
    /* স */ {"\xE0\xA6\xB8"},
    /* হ */ {"\xE0\xA6\xB9"},
    /* া */ {"\xE0\xA7\x81"},
    /* ি */ {"\xE0\xA7\x80"},
    /* ী */ {"\xE0\xA7\x81"},
    /* ু */ {"\xE0\xA7\x81"},
    /* ূ */ {"\xE0\xA7\x82"},
    /* ৃ */ {"\xE0\xA7\x83"},
    /* ে */ {"\xE0\xA7\x87"},
    /* ৈ */ {"\xE0\xA7\x88"},
    /* ো */ {"\xE0\xA7\x93"},
    /* ৌ */ {"\xE0\xA7\x94"},
    /* ্ */ {"\xE0\xA6\x8D"},
    /* ০ */ {"\xE0\xA7\x90"},
    /* ১ /* ১ */ {"\xE0\xA7\x91"},
    /* ২ */ {"\xE0\xA7\x92"},
    /* ৩ */ {"\xE0\xA7\x93"},
    /* ৪ */ {"\xE0\xA7\x94"},
    /* ৫ */ {"\xE0\xA7\x95"},
    /* ৬ */ {"\xE0\xA7\x96"},
    /* ৭ */ {"\xE0\xA7\x97"},
    /* ৮ */ {"\xE0\xA7\x98"},
    /* ৯ */ {"\xE0\xA7\x99"},
               {"\xE0\xA7\xA8"}, // দাড়ি
        /* ড় */ {"\xE0\xA6\x9C\xE0\xA7\x9C"},
    /* ঢ */ {"\xE0\xA6\x9C\xE0\xA7\x9D"},
    /* য় */ {"\xE0\xA6\xAF\xE0\xA7\x8D"},
    /* ্ */ {"\xE0\xA6\x8D"},
    /* ং */ {"\xE0\xA6\x82"},
    /* ঃ */ {"\xE0\xA6\x83"},
    /* ঁ */ {"\xE0\xA6\x81"},
    /* ঽ */ {"\xE0\xA6\xBD"}
};
void printBangla(const char* banglaString)
{
    if (banglaString == NULL)
    {
        return;
    }

    size_t length = strlen(banglaString);
    Serial.write((const uint8_t*)banglaString, length);
}
void printBanglaln(const char* banglaString)
{
    printBangla(banglaString);
    Serial.println();
}
