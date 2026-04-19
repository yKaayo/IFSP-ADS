#include <stdio.h>

int main()
{
    float num;
    float total;
    char digit;

    do
    {
        printf("Digite um numero: \n");
        scanf("%f", &num);

        // Calcula o dobre do numero inserido pelo usuario
        total = num * 2;
        printf("O dobro do numero %.2f e %.2f. \n", num, total);

        printf("Deseja calcular outro numero? (S para Sim / N para Nao): \n");
        scanf(" %c", &digit);

        // Caso digite uma opcao invalida entra num loop até digitar uma opcao valida
        while (digit != 'S' && digit != 's' && digit != 'N' && digit != 'n')
        {
            printf("Digite uma opcao valida: (S para Sim / N para Nao): \n");
            scanf(" %c", &digit);
        }
    } while (digit == 'S' || digit == 's');

    return 0;
}