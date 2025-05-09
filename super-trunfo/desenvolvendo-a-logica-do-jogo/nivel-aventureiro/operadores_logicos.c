#include <stdio.h>

int main()
{
    // Cabeçalho
    printf("\n");
    printf("**************************************\n");
    printf("**   Aula 01 - Operadores Lógicos   **\n");
    printf("**************************************\n");

    // Declaração de Variáveis
    int a = 0, b = -4;
    
    // Uso do Operador &&
    if(a > 0 && b > 0)
        printf("Os dois números são positivos.\n");
    else
        printf("Pelo menos um dos números é negativo.\n");

    // Uso do Operador ||
    if(a > 0 || b > 0)
        printf("\nPelo menos um dos números é positivo.\n");
    else
        printf("\nOs dois números são negativos.\n");


    // Uso do Operador !
    if(!a)
        printf("O valor é falso.\n");
    else
        printf("O valor é verdadeiro.\n");

    return 0;
}