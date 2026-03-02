#include <iostream>
#include <string>

int main() {
    int nota;
    std::cout << "Nota (0-100): ";
    std::cin >> nota;

    char letra;
    if (nota >= 90) letra = 'A';
    else if (nota >= 80) letra = 'B';
    else if (nota >= 70) letra = 'C';
    else if (nota >= 60) letra = 'D';
    else letra = 'F';

    std::string estado = (nota >= 60) ? "Aprobado" : "Reprobado";
    
    std::cout << "Letra: " << letra << " | Estado: " << estado << std::endl;
    return 0;
}
