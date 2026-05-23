// 3. Desenvolva um código que solicite ao usuário o preenchimento de uma matriz 3x3 com números inteiros. O programa deve varrer a matriz e encontrar qual é o maior valor digitado, exibindo também em qual posição (linha e coluna) ele foi encontrado.

#include <stdio.h>

int main()
{
    int matriz[3][3];
    int i, j;

    int max = matriz[0][0];
    int max_i = 0;
    int max_j = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matriz[i][j] > max)
            {
                max = matriz[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }

    printf("O maior valor e: %d, encontrado na posicao [%d][%d]\n", max, max_i, max_j);

    return 0;
}