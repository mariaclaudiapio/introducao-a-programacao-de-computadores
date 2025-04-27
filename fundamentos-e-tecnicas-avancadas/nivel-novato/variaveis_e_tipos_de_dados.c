#include <stdio.h>

int main()
{
    // Cabeçalho
    puts("");
    puts("*********************************************");
    puts("**   Aula 2 - Variáveis e Tipos de Dados   **");
    puts("*********************************************");
    puts("");

    // Declaração de variáveis
    int idade = 42;    
    float altura = 1.55;
    char sexo = 'F'; // caractere deve ser digitado entre 'aspas simples'
    char nome[30] = "Maria Cláudia"; // array de caracteres deve ser digitado entre " aspas duplas"

    printf("A idade é de %i anos.\n", idade);

    puts(" ");

    return 0;
}