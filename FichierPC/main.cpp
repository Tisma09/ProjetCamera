#include "main.hpp"

////////////////////////////////////////
//// FICHIER MAIN UTILISE PAR LE PC ////
////////////////////////////////////////


int main()
{
    initCamera(); // Fonction dans le fichier CameraVisca
    printf("Vous pouvez controler la camera \n");
    bool isRuning = true;
    while (isRuning == true) {
        programme(); // Fonction dans le fichier Commun
        if (pressEsc()) {
            printf("FIN DU PROGRAMME");
            isRuning = false;
        }
    }
    closeHandle(); // Referme le port
    return 0;
}

