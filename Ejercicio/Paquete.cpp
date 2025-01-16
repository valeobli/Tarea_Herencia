#include "Paquete.hpp"

Paquete::Paquete() : Envio(), largo(0), ancho(0), profundidad(0), peso(0), costoKg(0) {}

Paquete::Paquete(string nombreR, string nombreD, string direccionR, string direccionD, float costo,
                 float largo, float ancho, float profundidad, float peso, float costoKg) :
    Envio(nombreR, nombreD, direccionR, direccionD, costo), largo(largo), ancho(ancho), profundidad(profundidad),
    peso(peso > 0 ? peso : 0), costoKg(costoKg > 0 ? costoKg : 0) {}

void Paquete::setLargo(float largo) { this->largo = largo; }
float Paquete::getLargo() const { return largo; }
void Paquete::setAncho(float ancho) { this->ancho = ancho; }
float Paquete::getAncho() const { return ancho; }
void Paquete::setProfundidad(float profundidad) { this->profundidad = profundidad; }
float Paquete::getProfundidad() const { return profundidad; }
void Paquete::setPeso(float peso) { this->peso = (peso > 0 ? peso : 0); }
float Paquete::getPeso() const { return peso; }
void Paquete::setCostoKg(float costoKg) { this->costoKg = (costoKg > 0 ? costoKg : 0); }
float Paquete::getCostoKg() const { return costoKg; }
double Paquete::calculaCosto() const { return costo + (peso * costoKg); }