########################################################
## INSTRUCTION COMPILATION POUR LE CONTROLE DEPUIS PC ##
########################################################

# CMakeList.txt : projet CMake pour ProjetCamera, incluez la source et définissez
# la logique spécifique au projet ici.

cmake_minimum_required (VERSION 3.8)

project ("ProjetCamera")

# On ajoute tous les fichiers sauf ceux spécifiques à Arduino
add_executable (ProjetCamera "main.cpp" "main.hpp" "../Commun.cpp" "../Commun.hpp" "../CameraVisca.cpp" "../CameraVisca.hpp" "KeyboardPC.cpp" "KeyboardPC.hpp" "SerialPC.cpp" "SerialPC.hpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ProjetCamera PROPERTY CXX_STANDARD 20)
endif()

