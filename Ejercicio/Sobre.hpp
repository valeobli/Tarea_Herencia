#ifndef SOBRE_HPP
#define SOBRE_HPP

#include "Envio.hpp"

class Sobre : public Envio {
private:
    float largo;
    float ancho;
    float cargoAdicional;

public:
    Sobre();
    Sobre(string nombreR, string nombreD, string direccionR, string direccionD, float costo,
          float largo, float ancho, float cargoAdicional);

    
    void setLargo(float largo);
    float getLargo() const;
    void setAncho(float ancho);
    float getAncho() const;
    void setCargoAdicional(float cargoAdicional);
    float getCargoAdicional() const;

    double calculaCosto() const override;
};

#endif 