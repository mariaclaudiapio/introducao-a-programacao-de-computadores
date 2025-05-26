#include <stdio.h>

int main()
{
    printf("\n********************************\n");
    printf("**   Hora de Codar - Arrays   **\n");
    printf("********************************\n\n");

    int index;  

    char *nomesAlunos[3][3] = 
    {
        {"Joãzinho", "Português: 30", "Matemática: 90"},
        {"Mariazinha", "Português: 60", "Matemática: 60"},
        {"Flaviazinha", "Português: 90", "Matemática: 95"}
    };

    printf("Digite o nome do aluno para ver as notas: \n");
    printf("Para o aluno Joãzinho, digite 0;\n");
    printf("Para a aluna Mariazinha, digite 1;\n");
    printf("Para a aluna Flavizinha, digite 2.\n");

    scanf("%d", &index);

    if(index == 2 || index == 3)
        printf("A %s ficou com as seguintes notas - %s e %s.\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);
    else
        printf("O %s ficou com as seguintes notas - %s e %s.\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);
    
    return 0;
}