/* 
Library BanglaDuino written by Hasin Israk Toaha on 11/12/2024.
Author, Maintainer: Hasin Israk Toaha

Contact: toaha.banaripara@gmail.com
*/

#ifndef BANGLADUINO_H
#define BANGLADUINO_H

#include<Arduino.h>

#ifdef __cplusplus
extern "C"
{
#endif

void __attribute__((weak)) printBangla(const char* );
void __attribute__((weak)) printBanglaln(const char* );

String __attribute__((weak)) textToMorse(String);
String __attribute__((weak)) morseToText(String);

int __attribute__((weak)) lengthOfBanglaString(const char*);

String __attribute__((weak)) base64_encode(const String &input);
String __attribute__((weak)) base64_decode(const String &input);

String __attribute__((weak)) textToBin(const String);
String __attribute__((weak)) binToText(const String);

#ifdef __cplusplus
}
#endif

#endif // BANGLADUINO_H
