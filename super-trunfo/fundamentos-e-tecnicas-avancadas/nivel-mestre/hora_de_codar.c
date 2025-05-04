#include <stdio.h>

int main()
{
    // Cabeçalho
    puts("");
    puts("********************************************");
    puts("**   Aula 05 - Comparador de Inventários  **");
    puts("********************************************");
    puts("");

    // Declaração de Variáveis
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 10000;
    unsigned int estoqueB = 2000;

    float valorDoProdutoA = 10.50;
    float valorDoProdutoB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalDeA;
    double valorTotalDeB;

    int resultadoDeA, resultadoDeB;

    // Comparações do valor mínimo de estoque
    resultadoDeA = estoqueA > estoqueMinimoA;
    resultadoDeB = estoqueB > estoqueMinimoB;

    // Exibição das informações dos produtos
    printf("O produto %s tem estoque de %u unidades e valor unitário de R$ %.2f.\n", produtoA, estoqueA, valorDoProdutoA);
    printf("O produto %s tem estoque de %u unidades e valor unitário de R$ %.2f.\n", produtoB, estoqueB, valorDoProdutoB);
    printf("A está acima do estoque mínimo? %d. (estoque de A = %d e estoque mínimo de A = %d)\n", resultadoDeA, estoqueA, estoqueMinimoA);
    printf("B está acima do estoque mínimo? %d. (estoque de B = %d e estoque mínimo de B = %d)\n", resultadoDeB, estoqueB, estoqueMinimoB);

    // Comparações dos valores totais
    printf("O valor total de A é maior que o valor total de B? %d\n", (estoqueA * valorDoProdutoB) > (estoqueB * valorDoProdutoB));
    printf("O valor total de A é: %.2f\n", (valorDoProdutoA * estoqueA));
    printf("O valor total de B é: %.2f\n", (valorDoProdutoB * estoqueB));

    puts("");

    return 0;
}