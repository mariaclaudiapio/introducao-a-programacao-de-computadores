#include <stdio.h>

int main()
{
    printf("\n*****************************************\n");
    printf("**   Estruturas de Decisão Aninhadas   **\n");
    printf("*****************************************\n");

    // Declaração de Variáveis
    int numero;

    // Entrada de dados
    printf("Digite um número inteiro:\n");
    scanf("%d", &numero);

    // Processamento dos dados
    // Teste se o número é positivo
    if(numero > 0)
    {
        printf("O número %d é positivo ", numero);
        if(numero % 2 == 0)
            printf("e par.\n");
        else
            printf("e ímpar.\n");
    }
    
    // Teste se o número é zero
    else if(numero == 0)    
        printf("O número é 0.");

    // Teste se o número é negativo
    else
    {
        printf("O número %d é negativo", numero);
        if(numero % 2 == 0)
            printf("e par.\n");
        else
            printf("e ímpar.\n");
    }

    printf("\n");

    return 0;
}