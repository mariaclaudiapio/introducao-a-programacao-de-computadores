#include <stdio.h>

int main() 
{
    // Cabeçalho
    printf("\n");
    printf("**********************************************************\n");
    printf("**   Desafio Super Trunfo de Países II - Nível Novato   **\n");
    printf("**********************************************************\n");
    printf("\n");

    // Declaração das Variáveis (1ª carta)
    char estado1; // armazena a letra escolhida pelo usuário (de A a H)
    char codigoDaCarta1[4]; // armazena o código da carta (no formato letra + número de 01 a 04 - ex: A01, B03)
    char cidade1[30]; // armazena o nome da cidade inserido pelo usuário
    int populacao1; // armazena a população da cidade inserida pelo usuário
    float areaQuadrada1; // armazena a área da cidade, medida em kilômetros quadrados
    float pib1; // armazena o produto interno bruto da cidade escolhida pelo usuário
    int pontosTuristicos1; // armazena o número de pontos turísticos da cidade escolhida pelo usuário
    
    // Declaração das Variáveis (2ª carta)
    char estado2; // armazena a letra escolhida pelo usuário (de A a H)
    char codigoDaCarta2[4]; // armazena o código da carta (no formato letra + número de 01 a 04 - ex: A01, B03)
    char cidade2[30]; // armazena o nome da cidade inserido pelo usuário
    int populacao2; // armazena a população da cidade inserida pelo usuário
    float areaQuadrada2; // armazena a área da cidade, medida em kilômetros quadrados
    float pib2; // armazena o produto interno bruto da cidade escolhida pelo usuário
    int pontosTuristicos2; // armazena o número de pontos turísticos da cidade escolhida pelo usuário
    
    // Entrada dos dados (1ª carta)
    printf("Olá! Para o cadastro da 1ª carta, digite os dados solicitados a seguir.\n");
    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estado1);

    printf("Digite a letra informada anteriormente, seguida de um número de 01 a 04: ");
    scanf("%s", codigoDaCarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    
    printf("Digite o número de habitantes da cidade escolhida: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área da cidade (em quilômetros quadrados): ");
    scanf("%f", &areaQuadrada1);
    
    printf("Digite o Produto Interno Bruto (PIB) da cidade: ");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");
    
    // Cálculo da Densidade Populacional e do Pib per Capita da 1ª carta
    float densidadePopulacional1 = populacao1 / areaQuadrada1; // armazena o resultado da divisão da população da cidade escolhida pela sua área
    float pibPerCapita1 = pib1 / populacao1; // armazena o resultado da divisão do PIB da cidade escolhida pela sua população
    
    
    // Entrada dos dados (2ª carta)
    printf("Agora vamos para o cadastro da 2ª carta. Digite os dados solicitados a seguir.\n");
    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estado2);
    
    printf("Digite a letra informada anteriormente, seguida de um número de 01 a 04: ");
    scanf("%s", codigoDaCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    
    printf("Digite o número de habitantes da cidade escolhida: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área da cidade (em quilômetros quadrados): ");
    scanf("%f", &areaQuadrada2);
    
    printf("Digite o Produto Interno Bruto (PIB) da cidade: ");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");
    
    // Cálculo da Densidade Populacional e do Pib per Capita da 2ª carta
    float densidadePopulacional2 = populacao2 / areaQuadrada2; // armazena o resultado da divisão da população da cidade escolhida pela sua área
    float pibPerCapita2 = pib2 / populacao2; // armazena o resultado da divisão do PIB da cidade escolhida pela sua população
 

    // Implementação da lógica de comparação do atributo 'PIB per Capita'
    if(pibPerCapita1 > pibPerCapita2)
    {
        printf("O PIB Per Capita da Carta 1, de R$%.2f é superior ao da Carta 2, cujo valor é de R$%.2f.\n", pibPerCapita1, pibPerCapita2);
        printf("Por isso, a Carta 1 (%s) venceu!\n", cidade1);
    }
    else if(pibPerCapita2 > pibPerCapita1)
    {
        printf("O PIB Per Capita da Carta 2, de R$%.2f é superior ao da Carta 1, cujo valor é de R$%.2f.\n", pibPerCapita2, pibPerCapita1);
        printf("Por isso, a Carta 2 (%s) venceu!\n", cidade2);
    }
    else
        printf("O PIB Per Capita da Carta 1 é igual ao PIB Per Capita da Carta 2. As duas cidades empataram.\n");

    printf("\n");

    return 0;
}  