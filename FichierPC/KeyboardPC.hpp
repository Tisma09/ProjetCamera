#ifndef KEYBOARD_HPP
#define KEYBOARD_HPP

#include <windows.h> // On utilise la libray windows.h pour repéré les touches appuyés

//Controle aves ZQSD
bool pressUp(); // Vrai si Z est touché
bool pressDown(); // Vrai si Q est touché
bool pressLeft(); // Vrai si S est touché
bool pressRight(); // Vrai si D est touché
bool pressEsc(); // Vrai si Echap est touché

#endif // KEYBOARD_HPP
