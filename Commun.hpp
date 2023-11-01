#ifndef COMMUN_HPP
#define COMMUN_HPP

#include "CameraVisca.hpp"

#ifdef _WIN32
#include <iostream>
#include "FichierPC/KeyboardPC.hpp"  // Inclut le code Windows
#else
#include "KeyboardArduino.hpp"  // Inclut le code Arduino
#endif

void programme();

#endif // MAIN_HPP