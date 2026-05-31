#include <stdio.h>

void exibirMenuLocadora()
{
    printf("1 - Cadastrar Veiculo\n");
    printf("2 - Alugar Veiculo\n");
    printf("3 - Devolver Veiculo\n");
    printf("4 - Sair\n");
}

int main()
{
    int digit;

    do
    {
        exibirMenuLocadora();

        printf("Digite um digito: \n");
        scanf("%d", &digit);
    } while (digit != 4);

    return 0;
}