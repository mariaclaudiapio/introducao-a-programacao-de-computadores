#include <stdio.h>

// a função recursiva evoca a si mesma

// funçao recursiva que decrementa valores
void funcaoRecursiva(int numero)
{
    if(numero > 0) // condição base para evitar os loops infinitos
    {
        printf("%d \n", numero);

        funcaoRecursiva(numero - 1);
    }
}

int main()
{
    int quantidade = 10;

    printf("Contagem regressiva...\n");

    funcaoRecursiva(quantidade);

    return 0;
}