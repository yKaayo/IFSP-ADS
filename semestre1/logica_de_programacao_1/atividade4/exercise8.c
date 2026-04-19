// Faça um algoritmo que leia 10 valores numéricos inteiros em um vetor e três valores
// inteiros nas variáveis A B e C. Após a leitura, informe o número de vezes que os
// números A, B e C apareceram no vetor.

#include <stdio.h>

int main()
{
    int arr[10];
    int i;
    int A = 1;
    int B = 2;
    int C = 3;
    int countTimes[3];

    // Adicionando valores inicias no vetor de contagem
    for (int i = 0; i < 3; i++)
    {
        countTimes[i] = 0;
    }

    for (i = 0; i < 10; i++)
    {
        arr[i] = i;

        if (arr[i] == A)
        {
            countTimes[0] += 1;
        }

        if (arr[i] == B)
        {
            countTimes[1] += 1;
        }

        if (arr[i] == C)
        {
            countTimes[2] += 1;
        }
    }

    printf("A variavel A, B e C apareceu consecutivamente: %d, %d e %d\n", countTimes[0], countTimes[1], countTimes[2]);

    return 0;
}