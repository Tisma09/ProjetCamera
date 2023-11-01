# Programme de contole d'une caméra Sony EVI-D70/D70P

Ce programme permet de controler une camera grace au protocole VISCA ainsi que les normes de communications RS-232C/RS-422.

Les commandes prisent en charges permettent d'orienter la caméra dans toutes les directions. Les commandes sont dans le fichier `CameraVisca.h` et `CameraVisca.cpp`, elles peuvent etre modifier en utilisant les commandes VISCA listé dans [ce manuel](https://www.audiogeneral.com/Sony/evid70_manual.pdf).

Selon la configuration de la caméra (destinée à etre accrocher à l'envers ou non), il est possible que les directions soient inversées.

##  ➤ Appareil pris en charge
- Windows
- Arduino Mega
        

## 🛠️ Installation et  dépendance

### Windows 

- Cmake ou un IDE prenant en charge Cmake


### Arduino

- Arduino IDE ou IDE prenant en charge Arduino SDK (ex : VisualStudio avec l'extenstion vMicro)
        
## 🧑🏻‍💻 Usage

### Pour Windows 

Dans `SerialPC.hpp` vérifiez, et redéfinissez au besoin, le numéro du port COM utilisé. Il est possible de voir ce numéro via le gestionnaire des périphériques.

```
static const char* device = "\\\\.\\COM6"; // Définition du port 
```
Vous pouvez désormais compiler et lancer le programme avec CMake ou n'importe quel environnement de développement incluant CMake.

Le controle s'effectue avec les touches ZQSD. Vous pouvez désormais controler la caméra !

### Pour Arduino

Dans `KeyboardArduino.hpp` vérifiez, et redéfinissez au besoin, les pins correspondant aux branchements de vos boutons (configuré actuellement pour Haut : pin 52, Bas: pin 46, Droite: pin 50, Gauche: pin 48).

Ouvrez `ProjetCamera.ino` dans Arduino IDE ou un autre IDE capable de téléverser un programme dans votre Arduino. 

Téléversez le code. Vous pouvez désormais controler la caméra !