#include <stdio.h>

int main()
{
    puts("");
    printf("********************************************\n");
    printf("**   Estruturas de repetição - do while   **\n");
    printf("********************************************\n");
    puts("");

    int i = 1;

    do
    {
        printf("%d ", i);
        i++;        
    } while (i == 5);

    printf("\nSaiu do laço de repetição.\n");

    return 0;    
}