#include <stdio.h>

int main()
{
    printf("\n*****************\n");
    printf("**   Vetores   **\n");
    printf("*****************\n");

    int numeros[5] = {10, 20, 30, 40, 50};

    printf("\nOs números são: ");
    for(int indice = 0; indice < 5; indice++)
    {
        printf("%d ", numeros[indice]);
    }

    printf("\n\n");
    
    return 0;
}