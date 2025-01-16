#ifndef PAQUETE_HPP
#define PAQUETE_HPP

#include "Envio.hpp"

class Paquete : public Envio {
private:
    float largo;
    float ancho;
    float profundidad;
    float peso;
    float costoKg;

public:
    Paquete();
    Paquete(string nombreR, string nombreD, string direccionR, string direccionD, float costo,
            float largo, float ancho, float profundidad, float peso, float costoKg);

   
    void setLargo(float largo);
    float getLargo() const;
    void setAncho(float ancho);
    float getAncho() const;
    void setProfundidad(float profundidad);
    float getProfundidad() const;
    void setPeso(float peso);
    float getPeso() const;
    void setCostoKg(float costoKg);
    float getCostoKg() const;

    double calculaCosto() const override;
};

#endif 