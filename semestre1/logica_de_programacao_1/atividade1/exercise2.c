#include <stdio.h>

int main()
{
    int option;

    printf("--- Jogo de RPG de turno ---\n");
    printf("1. Atacar com a espada\n");
    printf("2. Usar magia de defesa\n");
    printf("3. Beber pocao de cura\n");
    printf("4. Tentar fugir da batalha\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("Atacar com a espada\n");
        break;
    case 2:
        printf("Usar magia de defesa\n");
        break;
    case 3:
        printf("Beber pocao de cura\n");
        break;
    case 4:
        printf("Tentar fugir da batalha\n");
        break;
    default:
        printf("Acao invalida! Voce perdeu o turno.\n");
    }

    return 0;
}