#include <iostream>

int main() {
    double peso, altura;
    std::cout << "Peso (kg) y Altura (m): ";
    std::cin >> peso >> altura;

    double imc = peso / (altura * altura);
    std::cout << "Su IMC es: " << imc << " - ";

    if (imc < 18.5) std::cout << "Bajo peso. Sugerencia: Dieta hipercalorica.";
    else if (imc < 25) std::cout << "Normal. Sugerencia: Mantenga su ritmo.";
    else if (imc < 30) std::cout << "Sobrepeso. Sugerencia: Ejercicio cardiovascular.";
    else if (imc < 35) std::cout << "Obesidad I. Sugerencia: Consulte a un nutricionista.";
    else std::cout << "Obesidad II. Sugerencia: Plan medico urgente.";

    return 0;
}
