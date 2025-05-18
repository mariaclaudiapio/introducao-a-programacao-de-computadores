#include <stdio.h>

int main()
{
    printf("*****************\n");
    printf("**   Tabuada   **\n");
    printf("*****************\n");

    int numero, i;

    printf("\nDigite um número para calcular a tabuada: \n");
    scanf("%d", &numero);

    for(i = 0; i <= 10; i++)
    {

        printf("%d x %d = %d\n", numero, i, (numero * i));  
    }      
       
    
    return 0;
}