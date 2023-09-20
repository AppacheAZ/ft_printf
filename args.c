#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int sumar(int c, ...) {
    int suma = 0;
    int i = 0;
    va_list args; //macro que permite acceder a los argumentos de una funcion
    va_start(args, c); //macro que inicializa la lista de argumentos y recibe el ultimo argumento fijo

    //va_arg (args, char *); //macro que permite acceder a los argumentos de la lista de argumentos
    while (i < c) 
    {
        suma += va_arg(args, int); //Uso de la lista de argumentos
        i ++;
    }

    va_end(args); //macro que finaliza la lista de argumentos
    return suma;
}

int main() {
    int resultado = sumar(5, 20, 30, 40, 100);
    printf("La suma es: %d\n\n", resultado);
    printf("El return de printf es: %d\n", printf(""));
    printf("El return de printf es: %d\n", printf("\n"));
    return 0;
}