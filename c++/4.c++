#include <iostream>
#include <cmath> 

int main() {
    
    double num1;
    double num2;

  
     std::cout << "NO SE COMO FUNCIONO PERO FUNCIONOOO NO TOCAR\n";
    std::cout << "--- Ejercicio de Operadores y cmath ---\n";
    std::cout << "Ingrese el primer número EN FAAST: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo número PERO EN FAST: ";
    std::cin >> num2;

    std::cout << "\n----------------------------------------\n";

    // 1. Operaciones Aritméticas Básicas
    std::cout << "A. Resultados de Operaciones Aritméticas:\n";
    std::cout << "Suma (" << num1 << " + " << num2 << ") = " << num1 + num2 << std::endl;
    std::cout << "Resta (" << num1 << " - " << num2 << ") = " << num1 - num2 << std::endl;
    std::cout << "Multiplicación (" << num1 << " * " << num2 << ") = " << num1 * num2 << std::endl;

    // Manejo de la división por cero
    if (num2 != 0) {
        std::cout << "División (" << num1 << " / " << num2 << ") = " << num1 / num2 << std::endl;
    } else {
        std::cout << "División: No se puede dividir por cero.\n";
    }

    std::cout << "\n---------SI FUNCIONAAAA NO SETOCAAA------------\n";

    // 2. Operaciones con la Librería cmath
    std::cout << "B. Resultados con la Librería cmath:\n";

    // Calcular la potencia: num1 elevado a la num2 (base^exponente)
    // pow(base, exponente)
    double potencia = std::pow(num1, num2);
    std::cout << "Potencia (" << num1 << " ^ " << num2 << ") = " << potencia << std::endl;

    // Calcular la raíz cuadrada del primer número
    // sqrt(radicando)
    if (num1 >= 0) {
        double raizCuadrada = std::sqrt(num1);
        std::cout << "Raíz Cuadrada de " << num1 << " = " << raizCuadrada << std::endl;
    } else {
        std::cout << "Raíz Cuadrada: No se puede calcular la raíz cuadrada de un número negativo.\n";
    }

    std::cout << "\nSI MUEVES UN POCO LOS COANDOS PUDE SER QUE DEJE DE FUNCIONAR ADVERTENCIA FUNCIONA PERO NO SE POR QUE NO TOCAR PELIGRO ADVERTENCIA OJOOO\n";

    return 0;
}