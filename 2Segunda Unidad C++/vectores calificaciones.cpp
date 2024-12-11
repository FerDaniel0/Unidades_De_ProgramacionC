//Juan Daniel Simental mendoza 24041241
#include <iostream>
#include <vector>
#include <string>

struct Estudiante {
    std::string nombre;
    float calificacion;
};

void mostrarEstudiantes(const std::vector<Estudiante>& estudiantes) {
    std::cout << "Lista de Estudiantes:\n";
    for (const auto& estudiante : estudiantes) {
        std::cout << "Nombre: " << estudiante.nombre 
                  << ", Calificación: " << estudiante.calificacion << std::endl;
    }
}

int main() {
    // Declarar un vector de estudiantes
    std::vector<Estudiante> estudiantes;

    // Agregar estudiantes al vector
    estudiantes.push_back({"Juan", 85.5});
    estudiantes.push_back({"María", 92.0});
    estudiantes.push_back({"Pedro", 76.5});
    
    // Mostrar la lista de estudiantes
    mostrarEstudiantes(estudiantes);
    
    // Buscar un estudiante por nombre
    std::string nombreBuscado = "María";
    for (const auto& estudiante : estudiantes) {
        if (estudiante.nombre == nombreBuscado) {
            std::cout << nombreBuscado << " tiene una calificación de " 
                      << estudiante.calificacion << std::endl;
            break;
        }
    }

    // Actualizar la calificación de un estudiante
    estudiantes[1].calificacion = 95.0; // Actualizamos la calificación de María
    std::cout << "Calificación actualizada de " << estudiantes[1].nombre 
              << ": " << estudiantes[1].calificacion << std::endl;

    // Eliminar un estudiante
    estudiantes.erase(estudiantes.begin() + 2); // Eliminar a Pedro
    std::cout << "Después de eliminar a Pedro:\n";
    mostrarEstudiantes(estudiantes);

    return 0;
}
