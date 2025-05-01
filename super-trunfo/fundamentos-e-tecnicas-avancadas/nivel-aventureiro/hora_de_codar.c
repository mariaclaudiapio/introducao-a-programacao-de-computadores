#include <stdio.h>

int main()
{
    // Cabeçalho
    puts("");
    puts("************************************");
    puts("**   Aula 03 - Cálculo da Média   **");
    puts("************************************");
    puts("");

    // Declaração de Variáveis
    float primeiraNota;
    float segundaNota;
    
    // Entrada de Dados
    puts("Digite a sua primeira nota: ");
    scanf("%f", &primeiraNota);
    puts("Digite a sua segunda nota: ");
    scanf("%f", &segundaNota);
    
    // Cálculo da média
    float soma = primeiraNota + segundaNota;
    float media = soma / 2.0;

    // Apresentação dos resultados
    printf("As suas notas foram %.2f e %.2f pontos, respectivamente.\n", primeiraNota, segundaNota);
    printf("A sua média é de %.2f pontos.\n", media);
    
    puts("");

    return 0;
}