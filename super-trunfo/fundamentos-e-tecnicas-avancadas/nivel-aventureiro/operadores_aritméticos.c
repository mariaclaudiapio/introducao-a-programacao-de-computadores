#include <stdio.h>

int main()
{
    // Cabeçalho
    puts("");
    puts("******************************************");
    puts("**   Aula 01 - Operadores Aritméticos   **");
    puts("******************************************");
    puts("");

    // Criação de variáveis
    float primeiroNumero, segundoNumero;
    float soma, multiplicação, subtração, divisao;

    // Entrada de dados
    puts("Digite o primeiro número (no formato 1.0)");
    scanf("%f", &primeiroNumero);
    puts("Agora digite o segundo número (também no formato 1.0)");
    scanf("%f", &segundoNumero);

    // Criação de variáveis para as operações
    soma = primeiroNumero + segundoNumero;
    multiplicação = primeiroNumero * segundoNumero;
    subtração = primeiroNumero - segundoNumero;
    divisao = primeiroNumero / segundoNumero;

    // Saída dos dados
    puts("");
    puts("Os resultados são:");
    printf("Soma: %.2f\n", soma);
    printf("Multiplicação: %.2f\n", multiplicação);
    printf("Subtração: %.2f\n", subtração);    
    printf("Divisao: %.2f", divisao);
    puts("\n");
    
    return 0;
}
