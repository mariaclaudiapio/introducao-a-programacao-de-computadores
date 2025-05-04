#include <stdio.h>

int main()
{
    // Cabeçalho
    puts("");
    puts("******************************************");
    puts("**   Aula 04 - Operadores Relacionais   **");
    puts("******************************************");
    puts("");

    // Declaração de Variáveis
    int primeiroNumero = 10;
    int segundoNumero = 20;

    puts("O valor 1 significa TRUE e o 0 significa FALSE");
    printf("O primeiro número é maior que o segundo número? %d\n", primeiroNumero > segundoNumero);  
    printf("O primeiro número é menor que o segundo número? %d\n", primeiroNumero < segundoNumero);   
    printf("O primeiro número é igual ao segundo número? %d\n", primeiroNumero == segundoNumero);
    printf("O primeiro número é diferente do segundo número? %d\n", primeiroNumero != segundoNumero);

    puts("");

    return 0;
}
