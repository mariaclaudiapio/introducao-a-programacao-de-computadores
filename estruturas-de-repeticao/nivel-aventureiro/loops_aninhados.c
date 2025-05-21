#include <stdio.h>

int main()
{
    printf("*************************\n");
    printf("**   Loops Aninhados   **\n");
    printf("*************************\n");

    for(int i = 1; i <= 10; i++)
    {
        printf("\nTabuada do %d:", i);
        for(int j = 1; j <= 10; j++)
        {
            printf("\n%d x %d = %d ", i, j, (i * j));
        }
        printf("\n");
    }

    return 0;
}