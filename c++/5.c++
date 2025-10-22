
#include <iostream>
using namespace std;

int main() {
    int numeroSecreto = 42; 
    int intento; 

    cout << "¡Bienvenido al juego de adivinanza si pierdes me debes un refresco y si ganas me debes dos por que yo soy arrecho como la ve" << endl;


    while (true) {
        cout << "Adivina el número secreto: ";
        cin >> intento;

        if (intento == numeroSecreto) {
            cout << "Felicidades Has adivinado el número no te creooo eres hacker habia 22 duos que deian que ers hacker sal de aca loco eso no vale hacker del diablo xd." << endl;
            break; 
        } else if (intento < numeroSecreto) {
            cout << "El número secreto subte mas con confianza un chin PLIIIIS. Intenta de nuevo." << endl;
        } else {
            cout << "El número secreto eS MAS ABAJO TE FUISTE MUY ARRIBA MI LOO BAJATE UN CHIN gracias. Intenta de nuevo." << endl;
        }
    }

    return 0;
}
