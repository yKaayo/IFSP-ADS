// Faça um algoritmo que leia 20 números e armazene em um vetor. Depois, some os 10
// primeiros elementos deste vetor;

#include <stdio.h>

int main()
{
    int arr[20];
    int sum = 0;
    int i;

    for (i = 0; i < 20; i++)
    {
        arr[i] = i;

        if (arr[i] < 10)
        {
            sum += arr[i];
        }
    }

    printf("A soma total foi: %d\n", sum);

    return 0;
}