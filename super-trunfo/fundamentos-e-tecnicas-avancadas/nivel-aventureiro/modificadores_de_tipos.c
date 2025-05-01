#include <stdio.h>

int main()
{
    // Cabeçalho
    puts("");
    puts("******************************************");
    puts("**   Aula 03 - Modificadores de tipos   **");
    puts("******************************************");
    puts("");

    // Declaração de Variáveis (números inteiros)
    int primeiroNumero = 10;
    int segundoNumero = 3;
    int soma = primeiroNumero + segundoNumero;
    int subtracao = primeiroNumero - segundoNumero;
    int multiplicacao = primeiroNumero * segundoNumero;
    int divisao = primeiroNumero / segundoNumero;
    // float divisao = (float) primeiroNumero / segundoNumero; // divisao com casting (recomendada para trabalho com variáveis de mais de um tipo)    

    // Impressão do resultado das operações
    printf("Operações com números inteiros:\n");
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao); // o resultado da divisão, para números não inteiros, resulta em perda de dados

    puts("");

    return 0;
}