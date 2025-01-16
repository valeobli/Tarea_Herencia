#include "Sobre.hpp"

Sobre::Sobre() : Envio(), largo(0), ancho(0), cargoAdicional(0) {}

Sobre::Sobre(string nombreR, string nombreD, string direccionR, string direccionD, float costo,
             float largo, float ancho, float cargoAdicional) :
    Envio(nombreR, nombreD, direccionR, direccionD, costo), largo(largo), ancho(ancho), cargoAdicional(cargoAdicional) {}

void Sobre::setLargo(float largo) { this->largo = largo; }
float Sobre::getLargo() const { return largo; }
void Sobre::setAncho(float ancho) { this->ancho = ancho; }
float Sobre::getAncho() const { return ancho; }
void Sobre::setCargoAdicional(float cargoAdicional) { this->cargoAdicional = cargoAdicional; }
float Sobre::getCargoAdicional() const { return cargoAdicional; }
double Sobre::calculaCosto() const {
    if (largo > 25 || ancho > 30) {
        return costo + cargoAdicional;
    }
    return costo;
}
