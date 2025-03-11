#include <stdio.h>

int main() {
    // Definir variables
    char inicial_nombre[] = "R";
    int edad = 43;
    float gasto = 965.12;
    long long premio = 5600000000000LL; // Utilizando long long para el premio mayor

    // Mostrar la salida en la terminal
    printf("El usuario %s tiene %d años, y se gasto %.2f pesos en billetes de loteria. El premio mayor es de %lld centavos.\n", inicial_nombre, edad, gasto, premio);

    return 0;
}
