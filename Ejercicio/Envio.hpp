#ifndef ENVIO_HPP
#define ENVIO_HPP

#include <string>
using namespace std;

class Envio {
protected:
    string nombreR;
    string nombreD;
    string direccionR;
    string direccionD;
    float costo;

public:
    Envio();
    Envio(string nombreR, string nombreD, string direccionR, string direccionD, float costo);
    virtual ~Envio() {}

   
    void setNombreR(string nombreR);
    string getNombreR() const;
    void setNombreD(string nombreD);
    string getNombreD() const;
    void setDireccionR(string direccionR);
    string getDireccionR() const;
    void setDireccionD(string direccionD);
    string getDireccionD() const;
    void setCosto(float costo);
    float getCosto() const;

    virtual double calculaCosto() const;
};

#endif 
