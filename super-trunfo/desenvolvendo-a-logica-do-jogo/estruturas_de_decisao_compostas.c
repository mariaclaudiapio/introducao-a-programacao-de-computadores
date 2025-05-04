#include <stdio.h>

int main()
{
    printf("\n");
    printf("*****************************************\n");
    printf("**   Estruturas de Decisão Compostas   **\n");
    printf("*****************************************\n");

    // Declaração de Variáveis
    int primeiroNumero = 15;
    int segundoNumero = 10;

    // Estrutura if como o else
    if(primeiroNumero > segundoNumero)
    {
        printf("O primeiro número (%d) é maior do que o segundo número (%d).\n", primeiroNumero, segundoNumero);
    }
    else
        if(primeiroNumero < segundoNumero)
            {
                printf("O primeiro número (%d) é menor do que o segundo número (%d).\n", primeiroNumero, segundoNumero);
            }
        else
            printf("O primeiro número (%d) é igual ao segundo número (%d).\n", primeiroNumero, segundoNumero);

    printf("\n");

    return 0;
}