// 5. Uma pequena loja vende 4 tipos de produtos e quer analisar suas vendas ao longo de 3 meses. Crie um programa que:

// 1. Declare uma matriz 4x3 (4 produtos, 3 meses).
// 2. Peça ao usuário para digitar a quantidade vendida de cada produto em cada mês.
// 3. Calcule e exiba o total vendido de cada produto ao final do trimestre (soma das linhas).
// 4. Calcule e exiba qual foi o mês com maior número total de vendas somando todos os produtos (soma das colunas).

// ● Objetivo: Modelar problemas do mundo real usando matrizes, somatórios por linha e somatórios por coluna.

#include <stdio.h>

int main()
{
    int matriz[4][3];
    int i, j;

    int sum_vendas = 0;
    int matriz_sum_por_mes[3] = {0, 0, 0}; // Inicializando o array em 0 para evitar lixo de memória
    int mes_melhor_vendas = 0;
    int melhor_mes;

    // Produto
    for (i = 0; i < 4; i++)
    {
        printf("Produto %d\n", i + 1); // Adicionando +1 para exibir o número do produto de uma melhor forma
        // Mês
        for (j = 0; j < 3; j++)
        {
            printf("Digite a quantidade vendida no mes %d: ", j + 1); // Adicionando +1 para exibir o número do mês de uma melhor forma
            scanf("%d", &matriz[i][j]);
            sum_vendas += matriz[i][j];
        }

        printf("O produto %d vendeu no total de %d no trimestre \n\n", i + 1, sum_vendas);

        sum_vendas = 0; // Zerando a variável para não afetar o próximo produto
    }

    // Mes
    for (j = 0; j < 3; j++)
    {
        // Produto
        for (i = 0; i < 4; i++)
        {
            matriz_sum_por_mes[j] += matriz[i][j];
        }

        if (matriz_sum_por_mes[j] > mes_melhor_vendas)
        {
            mes_melhor_vendas = matriz_sum_por_mes[j];
            melhor_mes = j + 1; // Adicionando +1 para exibir o número do mês de uma melhor forma
        }
    }

    printf("O mes com maior numero total de vendas foi o mes %d com %d vendas.\n", melhor_mes, mes_melhor_vendas);

    return 0;
}