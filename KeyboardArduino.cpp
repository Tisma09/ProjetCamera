#include "KeyboardArduino.hpp"

bool pressUp()
{
	int upVal = digitalRead(upPin);
	if (upVal == LOW) {
		return true;
	}
	else {
		return false;
	}
}

bool pressDown()
{
	int downVal = digitalRead(downPin);
	if (downVal == LOW) {
		return true;
	}
	else {
		return false;
	}
}

bool pressLeft()
{
	int leftVal = digitalRead(leftPin);
	if (leftVal == LOW) {
		return true;
	}
	else {
		return false;
	}
}

bool pressRight()
{
	int rightVal = digitalRead(rightPin);
	if (rightVal == LOW) {
		return true;
	}
	else {
		return false;
	}
}
