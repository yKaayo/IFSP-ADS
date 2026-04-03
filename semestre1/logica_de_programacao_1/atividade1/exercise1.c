#include <stdio.h>

int main()
{
    char option;
    float num1;
    float num2;
    float result;

    printf("--- CALCULADORA BASICA ---\n");

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Qual operacao matematica voce deseja?: (+, -, *, /):\n");
    scanf(" %c", &option);

    switch (option)
    {
    case '+':
        result = num1 + num2;
        printf("O resultado da sua conta de adicao foi %.2f\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("O resultado da sua conta de subtracao foi %.2f\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("O resultado da sua conta de multiplicacao foi %.2f\n", result);
        break;
    case '/':
        while (num2 == 0)
        {
            printf("Nao e possivel dividir um numero por 0\n");

            printf("Digite o segundo numero novamente: ");
            scanf("%f", &num2);
        }

        result = num1 / num2;
        printf("O resultado da sua conta de divisao foi %.2f\n", result);
        break;
    default:
        printf("Opcao Invalida!");
    }

    return 0;
}