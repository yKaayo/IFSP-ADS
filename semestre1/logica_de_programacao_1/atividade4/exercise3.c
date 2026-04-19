// Crie um algoritmo para ler 10 números inteiros e mostrar os números pares deste vetor;

#include <stdio.h>

int main()
{
    int arr[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        arr[i] = i;

        if (arr[i] % 2 == 0)
        {
            printf("O numero %d e par\n", arr[i]);
        }
    }

    return 0;
}