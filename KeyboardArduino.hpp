#ifndef KEYBOARDARDUINO_HPP
#define KEYBOARDARDUINO_HPP

#include <Arduino.h> // Library Arduino

// Définition des PIN
const int upPin = 52; 
const int downPin = 46;
const int rightPin = 50;
const int leftPin = 48;

bool pressUp();
bool pressDown();
bool pressLeft();
bool pressRight();
bool pressEsc();

#endif // KEYBOARDARDUINO_HPP
