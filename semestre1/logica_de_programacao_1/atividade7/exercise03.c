#include <stdio.h>

float calcularValorFinal(float valorDiaria, int quantidadeDias)
{
    float disconto = 0.9;

    float valor_total = valorDiaria * quantidadeDias;
    float valor_total_com_disconto = valor_total * disconto;

    return valor_total_com_disconto;
}

int main()
{
    float custo_total = calcularValorFinal(250, 7);
    printf("O valor total a pagar e: R$ %.2f\n", custo_total);

    return 0;
}