// 4. Escreva um programa que declare duas matrizes A e B, ambas 2x2. O usuário deve digitar os valores para ambas as matrizes. Em seguida, o programa deve gerar e imprimir uma terceira matriz C, onde cada elemento é a soma dos elementos correspondentes de A e B (ou seja, C[i][j] = A[i][j] + B[i][j]).

#include <stdio.h>

int main()
{
    int matrizA[2][2];
    int matrizB[2][2];
    int matrizC[2][2];
    int i, j;

    printf("Matriz A:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Matriz B:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    printf("Matriz C:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            // Somando
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%d ", matrizC[i][j]);
        }

        printf("\n");
    }

    return 0;
}