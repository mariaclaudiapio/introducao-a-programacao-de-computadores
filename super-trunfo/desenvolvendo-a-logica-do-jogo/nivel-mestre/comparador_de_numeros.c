#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    puts(" ");
    printf("*******************************\n");
    printf("**   Comparador de Números   **\n");
    printf("*******************************\n");
    puts(" ");

    // Declaração de Variáveis
    int numeroDoComputador, numeroDoJogador, resultado;
    char tipoDeComparacao;

    // Escolha do Número do Computador
    srand(time(0));
    numeroDoComputador = (rand() % 100) + 1; // gera números de 1 a 100
    
    // Menu do Jogo
    printf("Escolha tipo de Comparação e um número:\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("\nEscolha a Comparação: ");
    scanf(" %c", &tipoDeComparacao);

    printf("\nDigite um número entre 1 e 100: ");
    scanf("%d", &numeroDoJogador);

    switch (tipoDeComparacao)
    {
        case 'M':
        case 'm':
            resultado = numeroDoJogador > numeroDoComputador ? 1 : 0;
        break;

        case 'N':
        case 'n':
            resultado = numeroDoJogador < numeroDoComputador ? 1 : 0;
        break;

        case 'I':
        case 'i':
            resultado = numeroDoJogador == numeroDoComputador ? 1 : 0;
        break;
    
        default:
            printf("Opção Inválida.\n");
        break;
    }

    printf("\nO seu número foi %d e o do Computador foi %d.\n", numeroDoJogador, numeroDoComputador);

    // Comparação entre os valores escolhidos pelo Jogador e os valores gerados pelo Computador
    if(resultado == 1)
        printf("Parabéns, você ganhou!!! \\O/\n");
    else
        printf("Que pena, você perdeu!\n");

    puts(" ");

    return 0;
}