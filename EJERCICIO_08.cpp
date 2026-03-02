#include <iostream>

int main() {
    double saldo = 1000.0; 
    int opcion, transacciones = 0;

    std::cout << "1. Depositar\n2. Retirar\n3. Consultar\nElija: ";
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            double deposito;
            std::cout << "Monto: "; std::cin >> deposito;
            saldo += deposito; transacciones++;
            break;
        case 2:
            double retiro;
            std::cout << "Monto: "; std::cin >> retiro;
            if (retiro <= saldo) {
                saldo -= retiro; transacciones++;
            } else {
                std::cout << "Saldo insuficiente.";
            }
            break;
        case 3:
            std::cout << "Consulta de saldo.";
            break;
    }

    std::cout << "\nSaldo final: " << saldo << "\nTransacciones: " << transacciones;
    return 0;
}
