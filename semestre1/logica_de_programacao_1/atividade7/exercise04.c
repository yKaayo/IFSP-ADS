#include <stdio.h>

void aplicarMultaAtraso(float *valor_total_da_locacao, int dias_de_atraso)
{
    *valor_total_da_locacao = *valor_total_da_locacao + (dias_de_atraso * 30);
}

int main()
{
    float valor = 100;

    aplicarMultaAtraso(&valor, 7);
    printf("%.2f\n", valor);

    return 0;
}