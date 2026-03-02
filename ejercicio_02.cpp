#include <iostream>
#include <cmath> 

int main() {
    double a, b, c;
    std::cout << "Ingrese tres lados: ";
    std::cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        
        if (a == b && b == c) std::cout << "Equilatero y ";
        else if (a == b || b == c || a == c) std::cout << "Isosceles y ";
        else std::cout << "Escaleno y ";

        
        double a2 = std::pow(a, 2), b2 = std::pow(b, 2), c2 = std::pow(c, 2);
        
        if (a2+b2 == c2 || a2+c2 == b2 || b2+c2 == a2) std::cout << "rectangulo.";
        else if (a2+b2 < c2 || a2+c2 < b2 || b2+c2 < a2) std::cout << "obtusangulo.";
        else std::cout << "acutangulo.";
    } else {
        std::cout << "No es un triangulo valido.";
    }
    return 0;
}
