// Ler oito elementos inteiros em uma matriz unidimensional (A). Construir uma matriz B de
// mesma dimensão com os elementos da matriz A multiplicados por 3. Após, apresente
// os números da matriz B. Exemplo: o elemento B|0] deve ser implicado pelo elemento
// A[0)*3, o elemento B[1] deve ser implicado pelo elemento A[1]*3 e assim por diante, até
// a última posição:

#include <stdio.h>

int main()
{
    int arrA[8];
    int arrB[8];
    int i;

    for (i = 0; i < 8; i++)
    {
        arrA[i] = i;
        arrB[i] = arrA[i] * 3;

        printf("Matriz A[%d] * 3 = Matriz B[%d] \n", i, arrB[i]);
    }

    return 0;
}