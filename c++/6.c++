#include <iostream>
#include <string>

float calcularAreaRectangulo(float base, float altura);

int main() {
  
    float base;
    float altura;
    float area;

    std::cout << "--- Calculadora de Área de Rectángulo ---\n";

  
    std::cout << "Ingrese la longitud de la base: ";
    std::cin >> base;

    std::cout << "Ingrese la longitud de la altura: ";
    std::cin >> altura;

    area = calcularAreaRectangulo(base, altura);

    std::cout << "El área del rectángulo con base " << base
              << " y altura " << altura << " es: " << area << std::endl;
 
    return 0;
}

float calcularAreaRectangulo(float base, float altura) {
    float resultado = base * altura;
    return resultado;
    
}
