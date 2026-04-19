// Faça um algoritmo que leia 30 valores do tipo inteiro e armazene-os em um vetor. A
// seguir, o algoritmo deverá informar (1) todos os números pares que existem no vetor; (2)
// o menor e o maior valor existente no vetor; (3) quantos dos valores do vetor são maiores
// que a média desses valores:

#include <stdio.h>

int main()
{
    int arr[30];
    int arr2[8];
    int i;
    int minNum = 0;
    int maxNum = 0;
    int average = 0;

    // Adicionando os valores no vetor
    for (i = 0; i < 30; i++)
    {
        arr[i] = i;
    }

    // Numeros Pares
    printf("Os numeros pares sao: \n");
    for (i = 0; i < 30; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d\n", arr[i]);
        }
    }

    // Menor e Maior Valor
    for (i = 0; i < 30; i++)
    {
        // Maior valor
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }

        // Menor valor
        if (arr[i] < minNum)
        {
            minNum = arr[i];
        }
    }

    printf("O valor do vetor maior e %d e o menor e %d\n", maxNum, minNum);

    // Valores maior que a média dos valores no vetor
    for (i = 0; i < 30; i++)
    {
        average += arr[i];
    }

    average /= 30;
    printf("A media e %d\n", average);

    printf("Os numeros maiores que a media sao: \n");
    for (i = 0; i < 30; i++)
    {
        if (arr[i] > average)
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}