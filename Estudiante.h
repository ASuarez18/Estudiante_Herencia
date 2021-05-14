#pragma once
#include <string>
#include "Persona.h"

class Estudiante : public Persona{
    public:
    Estudiante();
    Estudiante(std::string, std::string);
    ~Estudiante();
    std::string getMatricula();
    void setMatricula(std::string);
    void imprimir();
    private:
    std::string matricula;
};