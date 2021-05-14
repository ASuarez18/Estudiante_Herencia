#pragma once
#include <string>

class Persona{
    public:
    Persona();
    Persona(std::string);
    ~Persona();
    std::string  getNombre();
    void setNombre(std::string);
    void imprimir();
    private:
    std::string nombre;
};