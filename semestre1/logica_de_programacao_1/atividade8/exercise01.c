#include <stdio.h>
#include <string.h>

int main()
{
    FILE *entrada = fopen("ips.txt", "r");
    FILE *saida = fopen("relatorio.txt", "w");

    if (entrada == NULL || saida == NULL)
    {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }

    char ip[50];
    char validos[100][50];
    char invalidos[100][50];

    int qtdValidos = 0;
    int qtdInvalidos = 0;

    while (fgets(ip, sizeof(ip), entrada))
    {
        int a, b, c, d;

        ip[strcspn(ip, "\n")] = '\0';

        if (sscanf(ip, "%d.%d.%d.%d", &a, &b, &c, &d) == 4)
        {
            if (a >= 0 && a <= 255 &&
                b >= 0 && b <= 255 &&
                c >= 0 && c <= 255 &&
                d >= 0 && d <= 255)
            {
                strcpy(validos[qtdValidos++], ip);
            }
            else
            {
                strcpy(invalidos[qtdInvalidos++], ip);
            }
        }
        else
        {
            strcpy(invalidos[qtdInvalidos++], ip);
        }
    }

    fprintf(saida, "[Enderecos validos:]\n");

    for (int i = 0; i < qtdValidos; i++)
    {
        fprintf(saida, "%s\n", validos[i]);
    }

    fprintf(saida, "\n[Enderecos invalidos:]\n");

    for (int i = 0; i < qtdInvalidos; i++)
    {
        fprintf(saida, "%s\n", invalidos[i]);
    }

    fclose(entrada);
    fclose(saida);

    printf("Relatorio gerado com sucesso!\n");

    return 0;
}