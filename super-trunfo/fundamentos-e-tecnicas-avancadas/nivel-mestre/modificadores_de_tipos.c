#include <stdio.h>

int main()
{
    // Cabeçalho
    puts("");
    puts("******************************************");
    puts("**   Aula 03 - Modificadores de tipos   **");
    puts("******************************************");
    puts("");

    // long: aumenta capacidade das variáveis primitivas
    // No double, o long aumenta a precisão (atenção, pois os valores tratados são alterados de acordo com o ambiente)
    // sort: economiza memória (útil para sistemas embarcados, por exemplo)
    
    // unsigned: variáveis que armazenam apenas valores positivos (dobra a faixa positiva da variável, em comparação com o signed)
    int numeroComSinal = 3000000000;
    unsigned int numeroSemSinal = 3000000000;
    
    printf("Valor do número com sinal: %d.\n", numeroComSinal); // o valor fica positivo porque "estoura" a capacidade de armazenamento da variável
    printf("Valor do número sem sinal: %u.\n", numeroSemSinal);
   
    puts("Tamanho das variáveis por tipo: ");
    printf("Inteiro: %d bytes.\n", sizeof(int));
    printf("Unsigned: %d bytes.\n", sizeof(unsigned int));
    printf("Long int: %d bytes.\n", sizeof(long int));
    printf("Long long int: %d bytes.\n", sizeof(long long int));
    printf("Float: %d bytes.\n", sizeof(float));
    printf("Double float: %d.\n", sizeof(double));
    printf("Short %d\n", sizeof(short));

    //exemplo da aula
    unsigned long int numeroGrandePositivo = 4000000000;
    unsigned int numeroPositivo = 4000000000;
    long int numeroGrande = 4000000000;
    int numero = 4000000000;
    short int numeroPequeno = 32768;
    

    puts("Exemplo da aula");
    printf("Número positivo grande: %lu\n", numeroGrandePositivo);
    printf("Número positivo: %u\n", numeroPositivo);
    printf("Número grande: %ld\n", numeroGrande);
    printf("Número: %d\n", numero);
    printf("Número pequeno: %d", numeroPequeno);

    puts("");

    return 0;
}