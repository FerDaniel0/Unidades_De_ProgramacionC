#include <iostream>

int main() {
    // Usando un bucle for
    std::cout << "Usando un bucle for:" << std::endl;
    for (int i = 1; i <= 5; i++) {
        std::cout << i << std::endl;
    }

    // Usando un bucle while
    std::cout << "Usando un bucle while:" << std::endl;
    int j = 1;
    while (j <= 5) {
        std::cout << j << std::endl;
        j++;
    }

    // Usando un bucle do while
    std::cout << "Usando un bucle do while:" << std::endl;
    int k = 1;
    do {
        std::cout << k << std::endl;
        k++;
    } while (k <= 5);

    return 0;
}
