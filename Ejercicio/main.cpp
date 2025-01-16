#include <iostream>
#include "Envio.hpp"
#include "Paquete.hpp"
#include "Sobre.hpp"

using namespace std;

int main() {
    Paquete paquete("Lulu", "Lila", "calle 1", "calle 2", 10, 20, 30, 40, 50, 60);
    cout << "costo paquete: " << paquete.calculaCosto() << endl;

    Sobre sobre("Lalo", "Lola", "Calle 3", "Calle 4", 10, 20, 30, 10);
    cout << "costo sobre: " << sobre.calculaCosto() << endl;

    return 0;
}
