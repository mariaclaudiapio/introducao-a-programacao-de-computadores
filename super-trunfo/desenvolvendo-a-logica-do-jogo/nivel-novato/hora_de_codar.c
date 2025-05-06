#include <stdio.h>

int main()
{
    // Cabeçalho
    printf("\n");
    printf("*****************************\n");
    printf("**   Controle de estoque   **\n");
    printf("*****************************\n");
    printf("\n");

    // Declaração de Variáveis
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    // Entrada de Dados
    printf("Digite a temperatura:\n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade:\n");
    scanf("%f", &umidade);

    printf("Entre com o estoque:\n");
    scanf("%u", &estoque);

    // Verificação dos Dados
    if(temperatura > 30)
        printf("A temperatura está alta.\n");
    else
        printf("A temperatura está dentro dos parâmetros.\n");

    if(umidade > 50)
        printf("A umidade está elevada.\n");
    else
        printf("A temperatura está dentro dos parâmewtros.\n");

    if(estoque < estoqueMinimo)
        printf("O estoque está abaixo do mínimo.\n");
    else
        printf("O estoque está normal.\n");

    return 0;
}