#include <iostream>
#include <cmath> 

int main() {
    double n1, n2;
    char op;
    std::cout << "Ingrese: operando1 operacion operando2 (ej: 5 + 3): ";
    std::cin >> n1 >> op >> n2;

    switch (op) {
        case '+': std::cout << "Resultado: " << n1 + n2; break;
        case '-': std::cout << "Resultado: " << n1 - n2; break;
        case '*': std::cout << "Resultado: " << n1 * n2; break;
        case '/': 
            if (n2 != 0) std::cout << "Resultado: " << n1 / n2;
            else std::cout << "Error: Division por cero.";
            break;
        case '%':
            if (n2 != 0) std::cout << "Resultado: " << std::fmod(n1, n2);
            else std::cout << "Error: Division por cero.";
            break;
        default: std::cout << "Operador no valido.";
    }
    return 0;
}
