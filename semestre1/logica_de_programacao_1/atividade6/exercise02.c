// 2. Crie um programa que leia do teclado os valores para preencher uma matriz 4x4 de inteiros. Depois que a matriz estiver completamente preenchida, o programa deve calcular e exibir a soma de todos os 16 elementos digitados.

#include <stdio.h>

int main()
{
    int matriz[4][4];
    int i, j;
    int sum = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            sum += matriz[i][j];
        }
    }

    printf("Soma de todos os elementos e: %d\n", sum);

    return 0;
}