#ifndef SERIALPC_HPP
#define SERIALPC_HPP

#include <stdio.h>
#include <stdint.h>
#include <windows.h>
#include <stdlib.h>

static const char* device = "\\\\.\\COM6"; // Définition du port utilisé

HANDLE initPort(const char* device);

void print_error(const char* context); // Gestion des erreurs
HANDLE open_serial_port(const char * device, uint32_t baud_rate); // Fonction pour ouvrir le port
int write_port(const char* command, long long taille); // Fonction pour ecrire les commandes au port
void closeHandle(); // Referme le port



#endif // SERIALPC_HPP
