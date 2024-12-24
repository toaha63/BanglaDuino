
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
    /*দাড়ি*/ {"\xE0\xA7\xA8"}, 
    /* ড় */ {"\xE0\xA6\x9C\xE0\xA7\x9C"},
    /* ঢ */ {"\xE0\xA6\x9C\xE0\xA7\x9D"},
    /* য় */ {"\xE0\xA6\xAF\xE0\xA7\x8D"},
    /* ্ */ {"\xE0\xA6\x8D"},
    /* ং */ {"\xE0\xA6\x82"},
    /* ঃ */ {"\xE0\xA6\x83"},
    /* ঁ */ {"\xE0\xA6\x81"},
    /* ঽ */ {"\xE0\xA6\xBD"}
};

const char base64_chars[] PROGMEM = 
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz"
    "0123456789+/";
    
    
void printBangla(const char* banglaString)
{
    if(banglaString == NULL)
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

int lengthOfBanglaString(const char* yourBanglaString)
{
    return (strlen(yourBanglaString) / 3);
}


String textToMorse(String input)
{
    String morseCode = "";

    for (int i = 0; i < input.length(); i++)
    {
        char c = input.charAt(i);

        switch (c)
        {
            case 'A': case 'a': morseCode += ".- "; break;
            case 'B': case 'b': morseCode += "-... "; break;
            case 'C': case 'c': morseCode += "-.-. "; break;
            case 'D': case 'd': morseCode += "-.. "; break;
            case 'E': case 'e': morseCode += ". "; break;
            case 'F': case 'f': morseCode += "..-. "; break;
            case 'G': case 'g': morseCode += "--. "; break;
            case 'H': case 'h': morseCode += ".... "; break;
            case 'I': case 'i': morseCode += ".. "; break;
            case 'J': case 'j': morseCode += ".--- "; break;
            case 'K': case 'k': morseCode += "-.- "; break;
            case 'L': case 'l': morseCode += ".-.. "; break;
            case 'M': case 'm': morseCode += "-- "; break;
            case 'N': case 'n': morseCode += "-. "; break;
            case 'O': case 'o': morseCode += "--- "; break;
            case 'P': case 'p': morseCode += ".--. "; break;
            case 'Q': case 'q': morseCode += "--.- "; break;
            case 'R': case 'r': morseCode += ".-. "; break;
            case 'S': case 's': morseCode += "... "; break;
            case 'T': case 't': morseCode += "- "; break;
            case 'U': case 'u': morseCode += "..- "; break;
            case 'V': case 'v': morseCode += "...- "; break;
            case 'W': case 'w': morseCode += ".-- "; break;
            case 'X': case 'x': morseCode += "-..- "; break;
            case 'Y': case 'y': morseCode += "-.-- "; break;
            case 'Z': case 'z': morseCode += "--.. "; break;
            case '0': morseCode += "----- "; break;
            case '1': morseCode += ".---- "; break;
            case '2': morseCode += "..--- "; break;
            case '3': morseCode += "...-- "; break;
            case '4': morseCode += "....- "; break;
            case '5': morseCode += "..... "; break;
            case '6': morseCode += "-.... "; break;
            case '7': morseCode += "--... "; break;
            case '8': morseCode += "---.. "; break;
            case '9': morseCode += "----. "; break;
            case ' ': morseCode += "  "; break; // Space between words
            case '.': morseCode += ".-.-.- "; break; // Period
            case ',': morseCode += "--..-- "; break; // Comma
            case '?': morseCode += "..--.. "; break; // Question mark
            case '\'': morseCode += ".----. "; break; // Apostrophe
            case '!': morseCode += "-.-.-- "; break; // Exclamation mark
            case '/': morseCode += "-..-. "; break; // Slash
            case '(': morseCode += "-.--. "; break; // Left parenthesis
            case ')': morseCode += "-.--.- "; break; // Right parenthesis
            case '&': morseCode += ".-... "; break; // Ampersand
            case ':': morseCode += "---... "; break; // Colon
            case ';': morseCode += "-.-.-. "; break; // Semicolon
            case '=': morseCode += "-...- "; break; // Equals
            case '+': morseCode += ".-.-. "; break; // Plus
            case '-': morseCode += "-....- "; break; // Hyphen
            case '_': morseCode += "..--.- "; break; // Underscore
            case '"': morseCode += ".-..-. "; break; // Quotation mark
            case '@': morseCode += ".--.-. "; break; // At sign
            default: break; 
        }
    }

    return morseCode;
}

String morseToText(String morseCode)
{
    String text = "";
    String currentMorse = "";
   
    for (int i = 0; i < morseCode.length(); i++)
    {
        char c = morseCode.charAt(i);
        
        if (c == ' ')
        {
            if (currentMorse.length() > 0)
             {
                switch (currentMorse.c_str()[0])
                {
                    case '.':
                        if (currentMorse == ".-") text += 'A';
                        else if (currentMorse == "-...") text += 'B';
                        else if (currentMorse == "-.-.") text += 'C';
                        else if (currentMorse == "-..") text += 'D';
                        else if (currentMorse == ".") text += 'E';
                        else if (currentMorse == "..-.") text += 'F';
                        else if (currentMorse == "--.") text += 'G';
                        else if (currentMorse == "....") text += 'H';
                        else if (currentMorse == "..") text += 'I';
                        else if (currentMorse == ".---") text += 'J';
                        else if (currentMorse == "-.-") text += 'K';
                        else if (currentMorse == ".-..") text += 'L';
                        else if (currentMorse == "--") text += 'M';
                        else if (currentMorse == "-.") text += 'N';
                        else if (currentMorse == "---") text += 'O';
                        else if (currentMorse == ".--.") text += 'P';
                        else if (currentMorse == "--.-") text += 'Q';
                        else if (currentMorse == ".-.") text += 'R';
                        else if (currentMorse == "...") text += 'S';
                        else if (currentMorse == "-") text += 'T';
                        else if (currentMorse == "..-") text += 'U';
                        else if (currentMorse == "...-") text += 'V';
                        else if (currentMorse == ".--") text += 'W';
                        else if (currentMorse == "-..-") text += 'X';
                        else if (currentMorse == "-.--") text += 'Y';
                        else if (currentMorse == "--..") text += 'Z';
                        else if (currentMorse == "-----") text += '0';
                        else if (currentMorse == ".----") text += '1';
                        else if (currentMorse == "..---") text += '2';
                        else if (currentMorse == "...--") text += '3';
                        else if (currentMorse == "....-") text += '4';
                        else if (currentMorse == ".....") text += '5';
                        else if (currentMorse == "-....") text += '6';
                        else if (currentMorse == "--...") text += '7';
                        else if (currentMorse == "---..") text += '8';
                        else if (currentMorse == "----.") text += '9';
                        else if (currentMorse == ".-.-.-") text += '.';
                        else if (currentMorse == "--..--") text += ',';
                        else if (currentMorse == "..--..") text += '?';
                        else if (currentMorse == ".----.") text += '\'';
                        else if (currentMorse == "-.-.--") text += '!';
                        else if (currentMorse == "-..-.") text += '/';
                        else if (currentMorse == "-.--.") text += '(';
                        else if (currentMorse == "-.--.-") text += ')';
                        else if (currentMorse == ".-...") text += '&';
                        else if (currentMorse == "---...") text += ':';
                        else if (currentMorse == "-.-.-.") text += ';';
                        else if (currentMorse == "-...-") text += '=';
                        else if (currentMorse == ".-.-.") text += '+';
                        else if (currentMorse == "-....-") text += '-';
                        else if (currentMorse == "..--.-") text += '_';
                        else if (currentMorse == ".-..-.") text += '"';
                        else if (currentMorse == ".--.-.") text += '@';
                        else text += '?';
                }
                currentMorse = "";
            }
        } else {
            currentMorse += c;
        }
    }

    if(currentMorse.length() > 0)
    {
        switch (currentMorse.c_str()[0])
        {
            case '.':
                if (currentMorse == ".-") text += 'A';
                else if (currentMorse == "-...") text += 'B';
                else if (currentMorse == "-.-.") text += 'C';
                else if (currentMorse == "-..") text += 'D';
                else if (currentMorse == ".") text += 'E';
                else if (currentMorse == "..-.") text += 'F';
                else if (currentMorse == "--.") text += 'G';
                else if (currentMorse == "....") text += 'H';
                else if (currentMorse == "..") text += 'I';
                else if (currentMorse == ".---") text += 'J';
                else if (currentMorse == "-.-") text += 'K';
                else if (currentMorse == ".-..") text += 'L';
                else if (currentMorse == "--") text += 'M';
                else if (currentMorse == "-.") text += 'N';
                else if (currentMorse == "---") text += 'O';
                else if (currentMorse == ".--.") text += 'P';
                else if (currentMorse == "--.-") text += 'Q';
                else if (currentMorse == ".-.") text += 'R';
                else if (currentMorse == "...") text += 'S';
                else if (currentMorse == "-") text += 'T';
                else if (currentMorse == "..-") text += 'U';
                else if (currentMorse == "...-") text += 'V';
                else if (currentMorse == ".--") text += 'W';
                else if (currentMorse == "-..-") text += 'X';
                else if (currentMorse == "-.--") text += 'Y';
                else if (currentMorse == "--..") text += 'Z';
                else if (currentMorse == "-----") text += '0';
                else if (currentMorse == ".----") text += '1';
                else if (currentMorse == "..---") text += '2';
                else if (currentMorse == "...--") text += '3';
                else if (currentMorse == "....-") text += '4';
                else if (currentMorse == ".....") text += '5';
                else if (currentMorse == "-....") text += '6';
                else if (currentMorse == "--...") text += '7';
                else if (currentMorse == "---..") text += '8';
                else if (currentMorse == "----.") text += '9';
                else if (currentMorse == ".-.-.-") text += '.';
                else if (currentMorse == "--..--") text += ',';
                else if (currentMorse == "..--..") text += '?';
                else if (currentMorse == ".----.") text += '\'';
                else if (currentMorse == "-.-.--") text += '!';
                else if (currentMorse == "-..-.") text += '/';
                else if (currentMorse == "-.--.") text += '(';
                else if (currentMorse == "-.--.-") text += ')';
                else if (currentMorse == ".-...") text += '&';
                else if (currentMorse == "---...") text += ':';
                else if (currentMorse == "-.-.-.") text += ';';
                else if (currentMorse == "-...-") text += '=';
                else if (currentMorse == ".-.-.") text += '+';
                else if (currentMorse == "-....-") text += '-';
                else if (currentMorse == "..--.-") text += '_';
                else if (currentMorse == ".-..-.") text += '"';
                else if (currentMorse == ".--.-.") text += '@';
                else text += '?';
        }
    }

    return text;
}

String base64_encode(const String &input)
{
    String encoded;
    int input_length = input.length();
    int i = 0;
    uint8_t char_array_3[3];
    uint8_t char_array_4[4];

    const uint8_t* data = (const uint8_t*)input.c_str();

    while (input_length--)
    {
        char_array_3[i++] = *(data++);
        if (i == 3)
        {
            char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
            char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
            char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
            char_array_4[3] = char_array_3[2] & 0x3f;

            for (i = 0; (i < 4); i++)
            {
                char c;
                memcpy_P(&c, &base64_chars[char_array_4[i]], sizeof(char));
                encoded += c;
            }
            i = 0;
        }
    }

    if(i)
    {
        for (int j = i; j < 3; j++)
            char_array_3[j] = '\0';

        char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
        char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
        char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
        char_array_4[3] = char_array_3[2] & 0x3f;

        for (int j = 0; (j < i + 1); j++)
        {
            char c;
            memcpy_P(&c, &base64_chars[char_array_4[j]], sizeof(char));
            encoded += c;
        }

        while ((i++ < 3))
            encoded += '=';
    }

    return encoded;
}

String base64_decode(const String &input)
{
    String decoded;
    int input_length = input.length();
    uint8_t char_array_4[4], char_array_3[3];
    int i = 0, j = 0;

    while (input_length-- && (input[i] != '=') && (isalnum(input[i]) || (input[i] == '+') || (input[i] == '/')))
    {
        char_array_4[j++] = input[i]; 
        i++;
        if (j == 4)
        {
            for (j = 0; j < 4; j++)
            {
                if (char_array_4[j] >= 'A' && char_array_4[j] <= 'Z')
                {
                    char_array_4[j] -= 'A';
                } else if (char_array_4[j] >= 'a' && char_array_4[j] <= 'z')
               {
                    char_array_4[j] -= 'a' - 26;
                } else if (char_array_4[j] >= '0' && char_array_4[j] <= '9') {
                    char_array_4[j] -= '0' - 52;
                } else if (char_array_4[j] == '+') {
                    char_array_4[j] = 62;
                } else if (char_array_4[j] == '/') {
                    char_array_4[j] = 63;
                } else {
                    char_array_4[j] = 0; // Invalid character
                }
            }

            char_array_3[0] = (char_array_4[0] << 2) + ((char_array_4[1] & 0x30) >> 4);
            char_array_3[1] = ((char_array_4[1] & 0xf) << 4) + ((char_array_4[2] & 0x3c) >> 2);
            char_array_3[2] = ((char_array_4[2] & 0x3) << 6) + char_array_4[3];

            for (j = 0; (j < 3); j++)
            {
                decoded += (char)char_array_3[j];
            }
            j = 0;
        }
    }

    if(j)
    {
        for (int k = j; k < 4; k++)
        {
            char_array_4[k] = 0;
        }

        for (int k = 0; k < 4; k++)
        {
            if (char_array_4[k] >= 'A' && char_array_4[k] <= 'Z')
           {
                char_array_4[k] -= 'A';
            } else if (char_array_4[k] >= 'a' && char_array_4[k] <= 'z')
            {
                char_array_4[k] -= 'a' - 26;
            } else if (char_array_4[k] >= '0' && char_array_4[k] <= '9')
          {
                char_array_4[k] -= '0' - 52;
            } else if (char_array_4[k] == '+')
           {
                char_array_4[k] = 62;
            } else if (char_array_4[k] == '/')
           {
                char_array_4[k] = 63;
            } else {
                char_array_4[k] = 0; // Invalid character
            }
        }

        char_array_3[0] = (char_array_4[0] << 2) + ((char_array_4[1] & 0x30) >> 4);
        char_array_3[1] = ((char_array_4[1] & 0xf) << 4) + ((char_array_4[2] & 0x3c) >> 2);
        char_array_3[2] = ((char_array_4[2] & 0x3) << 6) + char_array_4[3];

        for(int k = 0; (k < j - 1); k++)
        {
            decoded += (char)char_array_3[k];
        }
    }

    return decoded;
}

String textToBin(const String str)
{
	if (str.length() == 0)
	{
		return String();
	}
	String binaryString = "";
	for (unsigned int i = 0; i < str.length(); i++)
	{
		char c = str.charAt(i);
		for (int j = 7; j >= 0; j--)
		{
			binaryString += ((c >> j) & 1) ? '1' : '0';
		}
	}
	return binaryString;
}

String binToText(const String binaryString)
{
	String decodedString = "";

	if((binaryString.length() % 8) != 0)
	{
		return String();
	}
	for (unsigned int i = 0; i < binaryString.length(); i += 8)
	{
		String byteString = binaryString.substring(i, i + 8);
		char c = 0;

		for(int j = 0; j < 8; j++)
		{
			c <<= 1;
			if (byteString.charAt(j) == '1')
			{
				c |= 1;
			}
		}

		decodedString += c;
	}

	return decodedString;
}

void printAllUnicodeChars(int interval)
{
    for (uint32_t codePoint = 0; codePoint <= 0x10FFFF; codePoint++)
    {
        char utf8[5];
        int length = 0;

     
        if (codePoint <= 0x7F)
        {
            utf8[0] = (char)codePoint;
            length = 1;
        } else if (codePoint <= 0x7FF)
       {
            utf8[0] = 0xC0 | (codePoint >> 6);
            utf8[1] = 0x80 | (codePoint & 0x3F);
            length = 2;
        } else if (codePoint <= 0xFFFF)
       {
            utf8[0] = 0xE0 | (codePoint >> 12);
            utf8[1] = 0x80 | ((codePoint >> 6) & 0x3F);
            utf8[2] = 0x80 | (codePoint & 0x3F);
            length = 3;
        } else if (codePoint <= 0x10FFFF)
        {
            utf8[0] = 0xF0 | (codePoint >> 18);
            utf8[1] = 0x80 | ((codePoint >> 12) & 0x3F);
            utf8[2] = 0x80 | ((codePoint >> 6) & 0x3F);
            utf8[3] = 0x80 | (codePoint & 0x3F);
            length = 4;
        }

   
        if (length > 0)
        {
            utf8[length] = '\0';
            printBangla(utf8);
            delay(interval);
        }
    }
}
