#include <stdio.h>

int main()
{
    printf("\n");
    printf("***************************************\n");
    printf("**   Estruturas de Decisão Simples   **\n");
    printf("***************************************\n");

    // Declaração de Variáveis
    int primeiroNumero = 5;
    int segundoNumero = 10;

    // Estrutura if (sem o else - só verifica se é verdadeiro)
    if(primeiroNumero > segundoNumero)
    {
        printf("O primeiro número (%d) é maior do que o segundo número (%d).\n", primeiroNumero, segundoNumero);
    }

    printf("O programa saiu do if.\n");

    printf("\n");

    return 0;
}