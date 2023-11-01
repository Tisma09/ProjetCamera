#ifndef CAMERA_HPP
#define CAMERA_HPP

#ifdef _WIN32
#include "FichierPC/SerialPC.hpp"  // Inclut le code Windows
#else
#include "SerialArduino.hpp"  // Inclut le code Arduino
#endif

#define HEADER 0x81
#define CMD_VAL 0x01
#define MOVE_CMD 0x06
#define PAN_SPEED 0x12 //VITESSE PEUT ETRE MODIFIER
#define TILT_SPEED 0x12 //VITESSE PEUT ETRE MODIFIER
#define END_MSG 0xFF

void initCamera();

void stopCam();
void moveCamUp();
void moveCamDown();
void moveCamRight();
void moveCamLeft();

#endif // CAMERA_HPP
