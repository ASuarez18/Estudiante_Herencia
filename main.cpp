#include "Persona.h"
#include "Estudiante.h"
#include <iostream>
#include <string>

int main(){
    
    Persona gabriel("Gabriel");
    gabriel.imprimir();

    Estudiante Sofia("Sofia", "A01485697");
    Sofia.imprimir();
    
   std::cout << "Hello World!" << std::endl;
    return 0;
}