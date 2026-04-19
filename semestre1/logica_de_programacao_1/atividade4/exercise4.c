// Crie um algoritmo para ler 15 números inteiros e mostrar no final, os que forem maiores
// ou igual a 10;

#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 15; i++)
    {
        if (i >= 10)
        {
            printf("O numero %d e maior ou igual a 10\n", i);
        }
    }

    return 0;
}