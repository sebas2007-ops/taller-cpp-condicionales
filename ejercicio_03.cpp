
#include <iostream>

int main() {
    const int LEER = 0b001;     // 1
    const int ESCRIBIR = 0b010; // 2
    const int EJECUTAR = 0b100; // 4

    int valor;
    std::cout << "Ingrese valor entero de permisos: ";
    std::cin >> valor;

    std::cout << "Permisos: " << std::endl;
    if (valor & LEER) std::cout << "- LEER" << std::endl;
    if (valor & ESCRIBIR) std::cout << "- ESCRIBIR" << std::endl;
    if (valor & EJECUTAR) std::cout << "- EJECUTAR" << std::endl;

    return 0;
}
