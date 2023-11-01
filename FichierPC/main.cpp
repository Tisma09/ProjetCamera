#include "main.hpp"


int main()
{
    initCamera();
    printf("Vous pouvez controler la camera \n");
    bool isRuning = true;
    while (isRuning == true) {
        programme();
        if (pressEsc()) {
            printf("FIN DU PROGRAMME");
            isRuning = false;
        }
    }
    closeHandle();
    return 0;
}

