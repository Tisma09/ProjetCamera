#include "KeyboardPC.hpp"

////////////////////////////////////////////
//// VERIFICATION DE L'ETAT DES TOUCHES ////
////////////////////////////////////////////

bool pressUp() {
	if (GetAsyncKeyState('Z') & 0x8000) {
		return true;
	}
	else {
		return false;
	}
}
bool pressDown() {
	if (GetAsyncKeyState('S') & 0x8000) {
		return true;
	}
	else {
		return false;
	}
}
bool pressRight() {
	if (GetAsyncKeyState('D') & 0x8000) {
		return true;
	}
	else {
		return false;
	}
}
bool pressLeft() {
	if (GetAsyncKeyState('Q') & 0x8000) {
		return true;
	}
	else {
		return false;
	}
}

bool pressEsc() {
	if (GetAsyncKeyState(VK_ESCAPE) & 0x8000) {
		return true;
	}
	else {
		return false;
	}
}
