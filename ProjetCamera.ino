#include "Commun.hpp"

/////////////////////////////////////////////////////////////////////////
//// INITIALISATION POUR ARDUINO ET LANCEMANT DU PROGRAMME PRINCIPAL ////
/////////////////////////////////////////////////////////////////////////

void setup() {
  //Cr�ation de Serial et Serial1
  Serial.begin(9600);
  Serial1.begin(9600);
  //D�finition des pin
  pinMode(upPin,INPUT);
  pinMode(downPin,INPUT); 
  pinMode(rightPin,INPUT); 
  pinMode(leftPin,INPUT);
  //Initialise la cam�ra sur sa position "home"
  initCamera();
}

void loop() {
  //Lancemant du programme principal dans Commun
  programme();
}