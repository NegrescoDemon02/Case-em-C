#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float soma,mult, sub, div, num1, num2;
    int opt;

 // ----------------- Operações ---------------- //

    printf("\n Selecione as opcoes: ");

    printf("\n 1 Soma ");

    printf("\n 2 Subtracao ");

    printf("\n 3 Divisao ");

    printf("\n 4 Multiplicacao");

// ----------------- Opções ---------------- //

    printf("\n Digite uma opcao: ");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
        printf("Insira um numero: ");
        scanf("%f", &num1);
        printf("\n Insira outro numero: ");
        scanf("%f", &num2);
        soma = num1 + num2;
        printf("A soma entre esses numeros e: %.2f", soma);
        break;

    case 2:
        printf("Insira um numero: ");
        scanf("%f", &num1);
        printf("\n Insira outro numero: ");
        scanf("%f", &num2);
        sub = num1 - num2;
        printf("A subtracao entre esses numeros e: %.2f", sub);
        break;

    case 3:
        printf("Insira um numero: ");
        scanf("%f", &num1);
        printf("\n Insira outro numero: ");
        scanf("%f", &num2);
        div = num1 * num2;
        printf("A divisao entre esses numeros e: %.2f", div);
        break;

case 4:
        printf("Insira um numero: ");
        scanf("%f", &num1);
        printf("\n Insira outro numero: ");
        scanf("%f", &num2);
        div = num1 / num2;
        printf("A divisao entre esses numeros e: %.2f", mult);
        break;
        
    default:
        break;
    }

    return 0;
}
