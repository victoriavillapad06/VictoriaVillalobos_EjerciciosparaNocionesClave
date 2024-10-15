//
// Created by victo on 12/10/2024.
//

#include "main.h"
#include <iostream>

#include "estudiante.h"

int suma(int a, int b) {
    return a + b;
}
// Declarar persona para que funcione
#include"persona.h"
int g = 20;
int main() {
    std::cout << "Hola Mundo" << std::endl;
    std::cout << "La suma es: " << suma(5, 3) << std::endl;
    std::cout << "Valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl;
    Persona p;

    p.setNombre("Juan");
    p.setEdad(21);
    p.setGenero("Masculino");

    std::cout << "Nombre: " << p.getNombre() << std::endl;
    std::cout << "Edad: " << p.getEdad() << std::endl;
    std::cout << "Género: " << p.getGenero() << std::endl;
Estudiante* e;
    Estudiante estudiante;

    // Usar métodos de la clase base (Persona)
    estudiante.setNombre("Juan");
    estudiante.setEdad(21);
    estudiante.setGenero("Masculino");

    // Usar métodos de la clase derivada (Estudiante)
    estudiante.setGrado("Medicina");

    // Mostrar detalles del estudiante
    estudiante.mostrarDetalles();
    return 0;

}
