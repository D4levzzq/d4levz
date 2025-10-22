

#include <iostream>
#include <string> 


int main() {
 
    std::string nombre = "jesus";
    std::string nombre2 = "daniel";
    std::string apellido = "hernandez";
    std::string apellido2 = "monsalve";
    std::string frasesCompleta = nombre + ", " + nombre2 + ", " + apellido + "," + apellido2 + "! ";
    std::cout << "usuario completo " << frasesCompleta << std::endl;
    



    return 0;
}


