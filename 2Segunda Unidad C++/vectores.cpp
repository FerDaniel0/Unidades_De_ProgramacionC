//Juan Daniel Simental mendoza 24041241
#include <iostream>
#include <vector>

int main() {
    // Declarar un vector de enteros
    std::vector<int> numeros;

    // Agregar elementos al vector
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);

    // Mostrar los elementos del vector
    std::cout << "Elementos del vector: ";
    for (int i = 0; i < numeros.size(); i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    // Eliminar el último elemento
    numeros.pop_back();

    // Mostrar los elementos después de eliminar
    std::cout << "Elementos después de eliminar: ";
    for (int i = 0; i < numeros.size(); i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
