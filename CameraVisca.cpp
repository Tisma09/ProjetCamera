#include "CameraVisca.hpp"

//////////////////////////////////////////////////////////////
//// DEFINIS LES COMMANDES VISCA POUR POUVOIR LES ENVOYER ////
//////////////////////////////////////////////////////////////

void initCamera() {
  const char home[] = {HEADER, CMD_VAL, MOVE_CMD, 0x04, END_MSG};
  write_port(home, 5); // Appel write_port qui est définis différement dans SerialPC ou SerialArduino selon si on est sur PC ou sur Arduino
}

void stopCam() {
  const char stop[] = {0x81, CMD_VAL, MOVE_CMD, 0x01, PAN_SPEED, TILT_SPEED, 0x03, 0x03, END_MSG};
  write_port(stop, 9); // Appel write_port qui est définis différement dans SerialPC ou SerialArduino selon si on est sur PC ou sur Arduino
}

void moveCamUp(){
  const char up[] = {0x81, CMD_VAL, MOVE_CMD, 0x01, PAN_SPEED, TILT_SPEED, 0x03, 0x01, END_MSG};
  write_port(up, 9); // Appel write_port qui est définis différement dans SerialPC ou SerialArduino selon si on est sur PC ou sur Arduino
}

void moveCamDown(){
  const char down[] = {0x81, CMD_VAL, MOVE_CMD, 0x01, PAN_SPEED, TILT_SPEED, 0x03, 0x02, END_MSG};
  write_port(down, 9); // Appel write_port qui est définis différement dans SerialPC ou SerialArduino selon si on est sur PC ou sur Arduino
}

void moveCamRight() {
  const char right[] = {0x81, CMD_VAL, MOVE_CMD, 0x01, PAN_SPEED, TILT_SPEED, 0x02, 0x03, END_MSG};
  write_port(right, 9); // Appel write_port qui est définis différement dans SerialPC ou SerialArduino selon si on est sur PC ou sur Arduino
}

void moveCamLeft() {
  const char left[] = {0x81, CMD_VAL, MOVE_CMD, 0x01, PAN_SPEED, TILT_SPEED, 0x01, 0x03, END_MSG};
  write_port(left, 9); // Appel write_port qui est définis différement dans SerialPC ou SerialArduino selon si on est sur PC ou sur Arduino
}






