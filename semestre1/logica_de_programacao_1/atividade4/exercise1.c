// Ler dez elementos de uma matriz unidimensional do tipo inteiro e apresentar os valores lidos

#include <stdio.h>

int main()
{
    int arr[10];
    int i;

    printf("Os valores lidos foram: \n");

    for (i = 0; i < 10; i++)
    {
        arr[i] = i;
        printf("%d \n", arr[i]);
    }

    return 0;
}