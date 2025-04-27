#include <stdio.h>

int main()
{
    // Cabeçalho
    puts("");
    puts("*********************************************");
    puts("**   Aula 3 - Entrada e Saída de Dados   **");
    puts("*********************************************");
    puts("");

    // Saída dos dados armazenados nas variáveis
    int idade = 42; 
    printf("A idade é de %i anos.\n", idade); // o especificador para inteiros pode ser %d ou %i
    float altura = 1.55;
    printf("A altura é %f metros.\n", altura); // o especificador de ponto flutuante é o %f (%e retorna número em notação científica)
    printf("A altura é %.2f metros.\n", altura); // é possível limitar a quantidade de casas decimais a exibir
    printf("A altura é %e metros.\n", altura);
    char sexo = 'F'; // o especificador do caractere é %c
    printf("O sexo é %c.\n", sexo);    
    char nome[30] = "Maria Cláudia"; // o especificador de um array de caracteres é %s.

    puts("");

    // Entrada de dados
    printf("Digite a sua idade: ");
    scanf("%d", &idade); // parâmetros de entrada da função (especificador + ponteiro da variável)
    printf("A sua idade é %d anos.\n", idade);
    printf("Digite o seu nome: \n");
    scanf("%s", nome);
    printf("O seu nome é %s.\n", nome); // no caso do array de strings não é preciso o uso do &
    
    printf("Digite o seu sexo: \n");
    scanf(" %c", &sexo); // lembre-se de deixar um espaço antes do especificador de caracteres "%c"
    printf("O seu sexo é: %c.", sexo);

    puts("");

    return 0;
}