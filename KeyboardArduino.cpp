#include "KeyboardArduino.hpp"

////////////////////////////////////////////
//// VERIFICATION DE L'ETAT DES TOUCHES ////
////////////////////////////////////////////

bool pressUp()
{
	int upVal = digitalRead(upPin); // Valeur � HIGH quand il est pas touche
	if (upVal == LOW) {
		return true;
	}
	else {
		return false;
	}
}

bool pressDown()
{
	int downVal = digitalRead(downPin); // Valeur � HIGH quand il est pas touche
	if (downVal == LOW) {
		return true;
	}
	else {
		return false;
	}
}

bool pressLeft()
{
	int leftVal = digitalRead(leftPin); // Valeur � HIGH quand il est pas touche
	if (leftVal == LOW) {
		return true;
	}
	else {
		return false;
	}
}

bool pressRight()
{
	int rightVal = digitalRead(rightPin); // Valeur � HIGH quand il est pas touche
	if (rightVal == LOW) {
		return true;
	}
	else {
		return false;
	}
}
