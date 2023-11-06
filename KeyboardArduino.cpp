#include "KeyboardArduino.hpp"

////////////////////////////////////////////
//// VERIFICATION DE L'ETAT DES TOUCHES ////
////////////////////////////////////////////

bool pressUp()
{
	int upVal = digitalRead(upPin); // Valeur à HIGH quand il est pas touche
	if (upVal == LOW) {
		//Serial.print("UP"); Pour Debug
		return true;
	}
	else {
		return false;
	}
}

bool pressDown()
{
	int downVal = digitalRead(downPin); // Valeur à HIGH quand il est pas touche
	if (downVal == LOW) {
		//Serial.print("DOWN"); Pour Debug
		return true;
	}
	else {
		return false;
	}
}

bool pressLeft()
{
	int leftVal = digitalRead(leftPin); // Valeur à HIGH quand il est pas touche
	if (leftVal == LOW) {
		//Serial.print("LEFT"); Pour Debug
		return true;
	}
	else {
		return false;
	}
}

bool pressRight()
{
	int rightVal = digitalRead(rightPin); // Valeur à HIGH quand il est pas touche
	if (rightVal == LOW) {
		//Serial.print("RIGHT"); Pour Debug
		return true;
	}
	else {
		return false;
	}
}
