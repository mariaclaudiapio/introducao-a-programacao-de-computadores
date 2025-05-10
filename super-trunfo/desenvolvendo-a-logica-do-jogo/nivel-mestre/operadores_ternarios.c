#include <stdio.h>

int main()
{
    printf("\n");
    printf("******************************\n");
    printf("**   Operadores Ternários   **\n");
    printf("******************************\n");
    printf("\n");

    // sintaxe: (condição) ? (verdadeiro) : (falso)

    // Declaração de Variáveis
    float nota = 3;    

    // If ternário para checar se o aluno foi aprovado ou reprovado
    (nota >= 6) ? (printf("Parabéns, você foi aprovado!\n")) : (printf("Poxa, você foi reprovado!\n"));

    printf("\n");

    return 0;
}