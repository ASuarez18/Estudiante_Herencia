#pragma once
#include <iostream>
#include <string>
#include "Estudiante.h"

Estudiante::Estudiante():Persona(){
    matricula = "A00000000";
}

Estudiante::Estudiante(std::string nombre_, std::string matricula_) : Persona(nombre_){
    matricula = matricula_;
}

Estudiante::~Estudiante(){}

std::string Estudiante::getMatricula(){
    return matricula;
}

void Estudiante::setMatricula(std::string matricula_){
    matricula = matricula_;
}

void Estudiante::imprimir(){
    std::cout << "Nombre: " << getNombre() << std::endl;
    std::cout << "Matricula: " << matricula << std::endl;
}