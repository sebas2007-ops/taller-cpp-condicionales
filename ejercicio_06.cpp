#include <iostream>

int main() {
    int a, b;
    std::cout << "Ingrese A y B: ";
    std::cin >> a >> b;

    
    {
        int temp = a;
        int x = a, y = b; 
        x = y; y = temp;
        std::cout << "Temporal: A=" << x << ", B=" << y << std::endl;
    }

    
    {
        int x = a, y = b;
        x += y; y = x - y; x -= y;
        std::cout << "Aritmetica: A=" << x << ", B=" << y << std::endl;
    }

    
    {
        int x = a, y = b;
        x ^= y; y ^= x; x ^= y;
        std::cout << "XOR: A=" << x << ", B=" << y << std::endl;
    }
    return 0;
}
