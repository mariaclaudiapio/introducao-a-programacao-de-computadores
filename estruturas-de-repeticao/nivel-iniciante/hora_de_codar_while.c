#include <stdio.h>

int main()
{
    printf("************************************************\n");
    printf("**   Impressão de números pares de 1 até 10   **\n");
    printf("************************************************\n");

    int i = 0;

    printf("Os números ");
    while(i <= 10)
    {

        if(i % 2 == 0)
        printf("%d ", i);
        
        i++;
    }
    printf("são pares.\n");

    return 0;
}