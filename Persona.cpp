#include "Persona.h"
#include <iostream>
#include <string>

Persona::Persona(){
    nombre = "x";
}

Persona::Persona(std::string nombre_){
    nombre = nombre_;
}

Persona::~Persona(){}

std::string Persona::getNombre(){
    return nombre;
}

void Persona::setNombre(std::string nombre_){
    nombre = nombre_;
}

void Persona::imprimir(){
    std::cout << "Nombre: " << nombre << std::endl;
}