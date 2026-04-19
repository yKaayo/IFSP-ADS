// Faça um algoritmo para ler um vetor com 10 elementos e inverter a posição destes
// elementos, de tal modo que o primeiro elemento venha a ser o último depois da
// inversão;

#include <stdio.h>

int main()
{
    int arr[10];
    int i;
    int value;
    int invertedArr[10];

    // Adicionando os valores no vetor
    for (i = 0; i < 10; i++)
    {
        arr[i] = i;
    }

    // Inverter a posição
    printf("Os numeros invertidos sao: \n");
    for (i = 9; i >= 0; i--)
    {
        invertedArr[9 - i] = arr[i];
    }

    // Exibir os valores do vetor invertido
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", invertedArr[i]);
    }

    return 0;
}