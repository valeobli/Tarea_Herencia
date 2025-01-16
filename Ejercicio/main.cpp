#include <iostream>
#include "Envio.hpp"
#include "Paquete.hpp"
#include "Sobre.hpp"

using namespace std;

int main() {
    Paquete paquete("Lulu", "Lila", "calle A", "calle B", 10, 20, 30, 40, 50, 60);
    cout << "Costo del paquete: " << paquete.calculaCosto() << endl;

    Sobre sobre("Lalo", "Lola", "Calle C", "Calle D", 10, 20, 30, 10);
    cout << "Costo del sobre: " << sobre.calculaCosto() << endl;

    return 0;
}
