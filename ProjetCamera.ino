#include "Commun.hpp"



void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  pinMode(upPin,INPUT);
  pinMode(downPin,INPUT); 
  pinMode(rightPin,INPUT); 
  pinMode(leftPin,INPUT);
  initCamera();
}

void loop() {
  programme();
}