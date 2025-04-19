//============================================================================
// Name        : LoginEase.ino
// Author      : Pragnesh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Implementing an Arduino Leonardo as a keyboard for automated
//               password entry.
//============================================================================

#include "Keyboard.h"

uint8_t pass[] = {"MyPassowrd\n"};

void enetrPassowrd(uint8_t *passoWord)
{
    for(int i = 0; i<strlen(passoWord); i++)
    {
        Keyboard.write(passoWord[i]);
        delay(100);
    }
}
void setup() {
    // open the serial port:
    Serial.begin(9600);
    // initialize control over the keyboard:
    Keyboard.begin();
}

void loop()
{
    delay(2000);
    enetrPassowrd(pass);
    while(1);
}