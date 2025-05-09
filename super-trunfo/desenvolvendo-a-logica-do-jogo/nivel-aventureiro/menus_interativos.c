#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("\n");
    printf("***************************\n");
    printf("**   Menus Interativos   **\n");
    printf("***************************\n");

   // Declaração de Variáveis 
   int opcao;
   int numeroSecreto, palpite;

   printf("Menu Principal:\n");
   printf("1. Iniciar Jogo\n");
   printf("2. Ver Regras\n");
   printf("3. Sair\n");
   printf("Escolha uma opção:\n");
   scanf("%d", &opcao);


    switch(opcao)
    {
        case 1:
            srand(time(0));
            numeroSecreto = rand() % 10;
            
            // Entrada do palpite
            printf("Digite um número inteiro de 0 a 9: ");
            scanf("%d", &palpite);

            // Conferência do palpite com o Número Secreto e retorno ao usuário
            if(palpite == numeroSecreto)
                printf("Parabéns! Você acertou o número secreto!\n");
            else
                printf("Que pena! Você errou o número secreto. Ele era %d.\n", numeroSecreto);
            break;
        case 2:
            printf("As regras do jogo são:\n");
            break;
        case 3:
            printf("Saindo...");
            break;
        default:
            printf("Opção Inválida.\n");
    }    

    printf("\n");
    
    return 0;

}