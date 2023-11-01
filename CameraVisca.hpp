#ifndef CAMERA_HPP
#define CAMERA_HPP

#ifdef _WIN32 // Vraie si le programme est utilisé par un pc Windows
#include "FichierPC/SerialPC.hpp"  // Inclut le code Windows
#else
#include "SerialArduino.hpp"  // Inclut le code Arduino
#endif

#define HEADER 0x81
#define CMD_VAL 0x01
#define MOVE_CMD 0x06
#define PAN_SPEED 0x12 // VITESSE PEUT ETRE MODIFIER SI BESOIN
#define TILT_SPEED 0x12 // VITESSE PEUT ETRE MODIFIER SI BESOIN
#define END_MSG 0xFF


void initCamera(); // Remet la caméra sur sa position "home"

void stopCam(); // Stope la caméra 
void moveCamUp(); // Bouge la caméra vers le haut
void moveCamDown(); // Bouge la caméra vers le bas
void moveCamRight(); // Bouge la caméra vers la droite
void moveCamLeft(); // Bouge la caméra vers la gauche

#endif // CAMERA_HPP
