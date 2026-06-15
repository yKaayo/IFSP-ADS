#include <stdio.h>

typedef struct
{
    char nome[20];
    long long bytes;
    float mb;
    float percentual;
} Usuario;

float converterMB(long long bytes)
{
    return bytes / (1024.0 * 1024.0);
}

float calcularPercentual(long long bytes, long long totalBytes)
{
    return (bytes * 100.0) / totalBytes;
}

int main()
{
    FILE *entrada = fopen("usuarios.txt", "r");
    FILE *saida = fopen("relatorio.txt", "w");

    if (entrada == NULL || saida == NULL)
    {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }

    Usuario usuarios[500];

    int qtd = 0;
    long long totalBytes = 0;

    while (fscanf(entrada, "%s %lld",
                  usuarios[qtd].nome,
                  &usuarios[qtd].bytes) == 2)
    {
        totalBytes += usuarios[qtd].bytes;
        qtd++;
    }

    float totalMB = converterMB(totalBytes);

    for (int i = 0; i < qtd; i++)
    {
        usuarios[i].mb = converterMB(usuarios[i].bytes);

        usuarios[i].percentual =
            calcularPercentual(
                usuarios[i].bytes,
                totalBytes);
    }

    fprintf(saida,
            "ACME Inc. Uso do espaco em disco pelos usuarios\n");
    fprintf(saida,
            "------------------------------------------------------------\n");
    fprintf(saida,
            "Nr. Usuario          Espaco utilizado     %% do uso\n");

    for (int i = 0; i < qtd; i++)
    {
        fprintf(saida,
                // A formatação é feita para alinhar os dados em colunas
                "%-3d %-15s %10.2f MB %15.2f%%\n",
                i + 1,
                usuarios[i].nome,
                usuarios[i].mb,
                usuarios[i].percentual);
    }

    fprintf(saida,
            "\nEspaco total ocupado: %.2f MB\n",
            totalMB);

    fprintf(saida,
            "Espaco medio ocupado: %.2f MB\n",
            totalMB / qtd);

    fclose(entrada);
    fclose(saida);

    printf("Relatorio gerado com sucesso!\n");

    return 0;
}