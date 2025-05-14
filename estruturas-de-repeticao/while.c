#include <stdio.h>

int main()
{
    puts("");
    printf("*****************************************\n");
    printf("**   Estruturas de repeticao - While   **\n");
    printf("*****************************************\n");
    puts("");

    // Código para imprimir números de 1 até 5

    int i = 1;

    while (i <= 5)
    {
        printf("%d ", i);
        i++;
    }

    printf("\nSaiu do While.\n");

    return 0; 
}