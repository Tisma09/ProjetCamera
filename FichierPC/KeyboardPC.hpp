#ifndef KEYBOARD_HPP
#define KEYBOARD_HPP

#include <windows.h> // On utilise la libray windows.h pour rep�r� les touches appuy�s

//Controle aves ZQSD
bool pressUp(); // Vrai si Z est touch�
bool pressDown(); // Vrai si Q est touch�
bool pressLeft(); // Vrai si S est touch�
bool pressRight(); // Vrai si D est touch�
bool pressEsc(); // Vrai si Echap est touch�

#endif // KEYBOARD_HPP
