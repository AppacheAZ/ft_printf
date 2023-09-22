#include <stdio.h>

int main(){
    char eje_char = 'a';
    const char *eje_string = "Hola";
    int eje_int = 70;
    int eje_hex = 0x70;
    unsigned int eje_unsignedint = 2;

    printf("char:         %c \n", eje_char);
    printf("string:       %s \n", eje_string);
    printf("void-pointer: %p %p \n", &eje_int, &eje_string);
    printf("decimal:      %d \n", eje_int);
    printf("int:          %i \n", eje_int);
    printf("unsigned-int: %u \n", eje_unsignedint);
    printf("hexadecimal:  %x \n", eje_hex);
    printf("HEXADECIMAL:  %X \n", eje_hex);
    printf("percent:      %% \n\n");
    printf("f");
    return 0;
}
