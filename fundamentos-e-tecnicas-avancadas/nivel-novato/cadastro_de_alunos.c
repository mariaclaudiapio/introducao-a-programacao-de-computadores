#include <stdio.h>

int main()
{
    // Cabeçalho
    puts("");
    puts("***************************************************");
    puts("**   Hora de Codar - Cadastro de Alunos   **");
    puts("***************************************************");
    puts("");

    // Declaração de Variáveis
    int idade, matricula;
    float altura;
    char nome[50];

    // Entrada de dados
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite a sua matrícula: \n");
    scanf("%d", &matricula);

    printf("Digite a sua altura: \n");
    scanf("%f", &altura);

    printf("Digite o seu nome: \n");
    scanf("%s", nome);

    printf("A sua idade é %d anos.\n", idade);
    printf("A sua matrícula é %d.\n", matricula);
    printf("A sua altura é de %.2f metros.\n", altura);
    printf("O seu nome é %s.\n", nome);

    puts("");

    return 0;
}