#include <stdio.h>

int main()
{
    // Cabeçalho
    puts("");
    puts("********************************************");
    puts("**   Aula 02 - Operadores de Atribuição   **");
    puts("********************************************");
    puts("");

    // Declaração das Variáveis
    int primeiroNumero = 10;
    int resultado;

    // Operações de Atribuição
    resultado = 10; // atribuição simples
    printf("Atribuição Simples | resultado = %d\n", resultado);
    resultado += 20; // atribuição com incremento (mesmo que resultado = resultado + 20)
    printf("Atribuição Aditiva com Incremento | resultado = %d\n", resultado);
    resultado -= 05; // atribuição com decremento (mesmo que resultado = resultado - 05)
    printf("Atribuição Subtrativa com Incremento | resultado = %d\n", resultado);
    resultado *= 2; // atribuição com multiplicação (mesmo que resultado = resultado * 2)
    printf("Atribuição Multiplicativa com Incremento | resultado = %d\n", resultado);
    resultado /= 5; // atribuição com divisão (mesmo que resultado = resultado / 05)
    printf("Atribuição Divisiva com Incremento | resultado = %d\n", resultado);

    puts("");

    return 0;

}