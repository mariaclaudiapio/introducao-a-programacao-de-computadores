#include <stdio.h>

int main()
{
    printf("\n********************************************\n");
    printf("**   Formas Avançadas de Declarar Loops   **\n");
    printf("********************************************\n");

    for(int i = 0, j = 10; i < j; i++, j--)
        printf("i = %d e j = %d \n", i, j);

    printf("\n");
    
    return 0;
}