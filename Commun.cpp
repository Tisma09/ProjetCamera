#include "Commun.hpp"

//////////////////////////////////////////////////////////////////////////////////////////////
//// PARTIE PRINCIPALE DU PROGRAMME APPELANT LES FONCTIONS CORRESPONDANT AU TOUCHE APPUYE ////
//////////////////////////////////////////////////////////////////////////////////////////////

void programme() {
    if (pressUp()) {
        //printf("UP"); Debug
        moveCamUp(); // Fonction dans CameraVisca
    }
    else if (pressDown()) {
        //printf("DOWN"); Debug
        moveCamDown(); // Fonction dans CameraVisca
    }
    else if (pressLeft()) {
        //printf("LEFT"); Debug
        moveCamLeft(); // Fonction dans CameraVisca
    }
    else if (pressRight()) {
        //printf("RIGHT"); Debug
        moveCamRight(); // Fonction dans CameraVisca
    }
    else {
        stopCam(); // Fonction dans CameraVisca
    }
}
