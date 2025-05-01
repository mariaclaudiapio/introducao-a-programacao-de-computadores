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

    // Operadores de Incremento e de Decremento
    // Pós-Incremento (primeiro atribui e depois incrementa)
    int segundoNumero = 10;
    puts("******");
    printf("Antes do Incremento: %d\n", segundoNumero);
    segundoNumero++; // é o mesmo que segundoNumero + 1
    printf("Depois do Incremento: %d\n", segundoNumero);

    int terceiroNumero = 10;
    puts("******");
    printf("Antes do Decremento: %d\n", terceiroNumero);
    terceiroNumero--; // é o mesmo que segundoNumero + 1
    printf("Depois do Decremento: %d\n", terceiroNumero);

    // Pré-incremento (primeiro incrementa, depois atribui)   
    int quartoNumero = 10;
    puts("******");
    printf("Antes do Incremento: %d\n", quartoNumero);
    ++quartoNumero; // é o mesmo que segundoNumero + 1
    printf("Depois do Incremento: %d\n", quartoNumero);

    int quintoNumero = 10;
    puts("******");
    printf("Antes do Decremento: %d\n", quintoNumero);
    --quintoNumero; // é o mesmo que segundoNumero + 1
    printf("Depois do Decremento: %d\n", quintoNumero);

    puts("");

    return 0;
}