#include <stdio.h>

int main()
{
    printf("\n*******************************\n");
    printf("**   Jogo de Batalha Naval   **\n");
    printf("*******************************\n");

    // criação da matriz que representará o tabuleiro vazio
    char tabuleiro[10][10] = 
    {
        {'*', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'},
        {'1', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'2', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'3', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'4', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'5', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'6', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'7', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'8', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'9', '0', '0', '0', '0', '0', '0', '0', '0', '0'}
    };

    // impressão do tabuleiro vazio    
    int linha;
    int coluna;

    
    for(linha = 0; linha < 10; linha++)
    {
        // impressão do navio na vertical        
        tabuleiro[4][4] = 'I';
        tabuleiro[5][4] = 'I';
        tabuleiro[6][4] = 'I';

        for(coluna = 0; coluna < 10; coluna++)
        {
            printf("%c ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    

    return 0;
}