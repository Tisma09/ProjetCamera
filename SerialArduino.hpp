#ifndef SERIALARDUINO_HPP
#define SERIALARDUINO_HPP

#include <Arduino.h> // Library Arduino


// Fonction pour ecrire les commandes au port
int write_port(const char* buffer, long long taile);//, size_t size);

// Pas besoin de fonction pour ouvrir ou fermer le port avec Arduino


#endif // SERIALARDUINO_HPP
