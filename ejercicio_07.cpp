#include <iostream>

int main() {
    int año;
    std::cout << "Ingrese un año: ";
    std::cin >> año;

    bool esBisiesto = (año % 4 == 0 && año % 100 != 0) || (año % 400 == 0);

    std::cout << "Razonamiento: " << std::endl;
    std::cout << "1. Divisible por 4? " << (año % 4 == 0 ? "Si" : "No") << std::endl;
    std::cout << "2. No divisible por 100? " << (año % 100 != 0 ? "Si" : "No") << std::endl;
    std::cout << "3. O divisible por 400? " << (año % 400 == 0 ? "Si" : "No") << std::endl;
    
    if (EsBisiesto) std::cout << "Resultado: Es bisiesto.";
    else std::cout << "Resultado: No es bisiesto.";

    return 0;
}
