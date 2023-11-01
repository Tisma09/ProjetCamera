#include "Commun.hpp"

/////////////////////////////////////////////////////////////////////////
//// INITIALISATION POUR ARDUINO ET LANCEMANT DU PROGRAMME PRINCIPAL ////
/////////////////////////////////////////////////////////////////////////

void setup() {
  //Création de Serial et Serial1
  Serial.begin(9600);
  Serial1.begin(9600);
  //Définition des pin
  pinMode(upPin,INPUT);
  pinMode(downPin,INPUT); 
  pinMode(rightPin,INPUT); 
  pinMode(leftPin,INPUT);
  //Initialise la caméra sur sa position "home"
  initCamera();
}

void loop() {
  //Lancemant du programme principal dans Commun
  programme();
}