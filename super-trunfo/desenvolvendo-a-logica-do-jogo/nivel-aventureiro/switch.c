#include <stdio.h>

int main()
{
    printf("\n");
    printf("***********************\n");
    printf("**   Uso do Switch   **\n");
    printf("***********************\n");

    // O Switch é mais adequado para uso em menus

    // Declaração de Variáveis
    int opcao;
    float saldo = 1000, deposito, saque;

    // Entrada e Processamento de Dados
    printf("Esolha uma opção (de 1 a 3):\n");
    printf("1 - Consultar Saldo;\n");
    printf("2 - Fazer um Depósito;\n");
    printf("3 - Fazer um Saque;\n");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            printf("Seu saldo é R$ %.2f.", saldo);
            break;
        case 2:
            printf("Digite um valor para o depósito:\n");
            scanf("%f", &deposito);
            saldo = saldo + deposito;
            printf("Seu saldo agora é R$ %.2f.\n", saldo);
            break;
        case 3:
            printf("Digite um valor para o saque:\n");
            scanf("%f", &saque);
            saldo = saldo - saque;
            printf("Seu saldo agora é R$ %.2f.\n", saldo);
            break;
        default:
            printf("Opção Inválida.\n");
    }

    printf("\n");
    
    return 0;

}