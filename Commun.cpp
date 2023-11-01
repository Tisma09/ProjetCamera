#include "Commun.hpp"

void programme() {
    if (pressUp()) {
        //printf("UP");
        moveCamUp();
    }
    else if (pressDown()) {
        //printf("DOWN");
        moveCamDown();
    }
    else if (pressLeft()) {
        //printf("LEFT");
        moveCamLeft();
    }
    else if (pressRight()) {
        //printf("RIGHT");
        moveCamRight();
    }
    else {
        stopCam();
    }
}
