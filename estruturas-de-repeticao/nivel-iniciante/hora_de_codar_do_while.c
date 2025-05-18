#include <stdio.h>

int main()
{
    printf("************************************************\n");
    printf("**   Impressão de números ímpares de 1 até 10   **\n");
    printf("************************************************\n");

    int numero;

    do
    {
        printf("Digite um número par para sair do programa...\n");
        scanf("%d", &numero);

        if(numero % 2 == 0)
        {
            printf("O número %d é par. \n", numero);
        }
        else
        {
            printf("O número %d é ímpar. \n", numero);
        }
    } 
    while (numero % 2 != 0);

    printf("Você digitou um número par. Saindo do programa...\n");      

    return 0;
}