#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("\n");
    printf("******************************\n");
    printf("**   Pedra, Papel, Tesoura  **\n");
    printf("******************************\n");

    // Regra do Jogo: pedra ganha de tesoura, tesoura ganha de papel, papel ganha de pedra
    
    // Declaração de Variáveis
    int escolhaDoJogador, escolhaDoComputador;
    
    // Entrada da Escolha do Jogador
    printf("\n");   
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    scanf("%d", &escolhaDoJogador);
    
    // Geração da Escolha do Computador
    srand(time(0));
    escolhaDoComputador = (rand() % 3) + 1; 
    
    // Exibição das Escolhas do Computador e do Jogador no terminal
    switch(escolhaDoJogador)
    {
        case 1:
            printf("Jogador: Pedra | ");
            break;
        case 2:
            printf("Jogador: Papel | ");
            break;
        case 3:
            printf("Jogador: Tesoura | ");
            break;
        Default:
            printf("Opção Inválida!\n");
    }

    switch(escolhaDoComputador)
    {
        case 1:
            printf("Computador: Pedra\n");
            break;
        case 2:
            printf("Computador: Papel\n");
            break;
        case 3:
            printf("Computador: Tesoura\n");
            break;
    }

    // Checagem do ganhador
    if(escolhaDoJogador == escolhaDoComputador)
    {
        printf("###   O jogo empatou!  ###\n");
    }
    else if((escolhaDoJogador == 1 && escolhaDoComputador == 3) ||
        (escolhaDoJogador == 2 && escolhaDoComputador == 1) ||
        (escolhaDoJogador == 3 && escolhaDoComputador == 2))
    {
        printf("###   Parabéns, você ganhou!!! 🏆   ###\n");
    }
    else
    {
        printf("###   Poxa, você perdeu! 🥹   ###\n");
    }   

    printf("\n");

    return 0;
}