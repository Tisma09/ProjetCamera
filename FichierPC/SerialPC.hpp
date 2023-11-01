#ifndef SERIAL_HPP
#define SERIAL_HPP

#include <stdio.h>
#include <stdint.h>
#include <windows.h>
#include <stdlib.h>


HANDLE initPort();

void print_error(const char* context); // Gestion des erreurs
HANDLE open_serial_port(const char * device, uint32_t baud_rate); // Fonction pour ouvrir le port
int write_port(const char* command, long long taille); // Fonction pour ecrire les commandes au port
void closeHandle(); // Referme le port



#endif // SERIAL_HPP
