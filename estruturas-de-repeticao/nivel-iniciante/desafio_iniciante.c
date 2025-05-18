#include <stdio.h>

int main()
{
    printf("\n******************************************\n");
    printf("**   Jogo de Xadrez - Nível Iniciante   **\n");
    printf("******************************************\n");

    /* Declaração das Variáveis: 
        contador - é a variável de incremento
        arrays de chars torre, bispo e rainha - armazenam os movimentos das peças
       
    */
    char torre[15] = "direita"; 
    char bispo[15] = "cima-direita"; 
    char rainha[15] = "esquerda";
    int contador = 0;

    // Imprime a simulação do movimento da torre (5 casas para a direita)
    printf("\n**  Movimento da Torre:  **\n");
    while(contador < 5)
    {
        printf("%s\n", torre);
        contador++;
    }    

    // Imprime a simulação do movimento do bispo (5 casas oara cima e para a direita)
    printf("\n**  Movimento do bispo:  **\n");
    for(contador = 0; contador < 5; contador++)
        printf("%s\n", bispo);
    
    // Imprime a simulação do movimento da rainha (8 casas para a esquerda)
    printf("\n**  Movimento da rainha:  **\n");
    contador = 0;
    do
    {
        printf("%s\n",rainha);
        contador++;
    }    
    while (contador < 8);

    printf("\n");
    

    

    return 0;
}