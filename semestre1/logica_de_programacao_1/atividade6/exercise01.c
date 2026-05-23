// 1. Crie um programa em C que declare uma matriz 3x3 de números inteiros. O programa deve preencher a diagonal principal com o número 1 e todos os outros elementos com o número 0. Ao final, a matriz deve ser impressa na tela formatada (com linhas e colunas alinhadas).

#include <stdio.h>

int main()
{
    int matriz[3][3];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }
        }
    }

    printf("Matriz formatada:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}