#include <stdio.h>

int main()
{
    printf("\n******************\n");
    printf("**   Matrizes   **\n");
    printf("******************\n");

    int numeros[3][3] = 
    {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    printf("\nOs números são: \n");
    for(int linha = 0; linha < 3; linha++)
    {
        printf("[ ");
        for(int coluna = 0; coluna < 3; coluna++)
        {
            printf("%d ", numeros[linha][coluna]);
        }              
        printf("]\n");
    }

    printf("\n");

    return 0;
}