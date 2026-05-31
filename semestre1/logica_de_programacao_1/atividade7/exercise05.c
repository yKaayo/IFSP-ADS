#include <stdio.h>

int lerAnoFabricacao(int ano)
{
    do
    {
        printf("Digite o ano do veiculo (maior que 2010): ");
        scanf("%d", &ano);

        if (ano <= 2010)
        {
            printf("Ano invalido para a frota!\n");
        }
    } while (ano <= 2010);

    int ano_validado = ano;

    return ano_validado;
}

void classificarVeiculo(int ano_validado)
{
    if (ano_validado >= 2020)
    {
        printf("Classificacao: Veiculo Seminovo\n");
    }
    else
    {
        printf("Classificacao: Veiculo Usado\n");
    }
}

int main()
{
    int ano;

    int ano_validado = lerAnoFabricacao(ano);
    classificarVeiculo(ano_validado);

    return 0;
}