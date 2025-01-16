#include "Envio.hpp"

Envio::Envio() : nombreR(""), nombreD(""), direccionR(""), direccionD(""), costo(0.0) {}

Envio::Envio(string nombreR, string nombreD, string direccionR, string direccionD, float costo) :
    nombreR(nombreR), nombreD(nombreD), direccionR(direccionR), direccionD(direccionD), costo(costo) {}

void Envio::setNombreR(string nombreR) { this->nombreR = nombreR; }
string Envio::getNombreR() const { return nombreR; }
void Envio::setNombreD(string nombreD) { this->nombreD = nombreD; }
string Envio::getNombreD() const { return nombreD; }
void Envio::setDireccionR(string direccionR) { this->direccionR = direccionR; }
string Envio::getDireccionR() const { return direccionR; }
void Envio::setDireccionD(string direccionD) { this->direccionD = direccionD; }
string Envio::getDireccionD() const { return direccionD; }
void Envio::setCosto(float costo) { this->costo = costo; }
float Envio::getCosto() const { return costo; }
double Envio::calculaCosto() const { return costo; }