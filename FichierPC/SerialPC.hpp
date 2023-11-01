#ifndef SERIAL_HPP
#define SERIAL_HPP

#include <stdio.h>
#include <stdint.h>
#include <windows.h>
#include <stdlib.h>


HANDLE open_serial_port(const char * device, uint32_t baud_rate);
int write_port(const char* command, long long taille);
void closeHandle();



#endif // SERIAL_HPP
