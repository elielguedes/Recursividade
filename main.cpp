#include <stdio.h>

// Assinatura das funçoes
float Soma(float Num1, float Num2);
float Sub(float Num1, float Num2);
float mult(float Num1, float Num2);
float Div(float Num1, float Num2);
float Fatorial(float Num1);
float Termial(float Num1);
float Exponencial(float Num1, float Num2);
float Fibonucci(float Num1);

int main()
{
    float num1, num2, ResSoma = 0, ResulSub = 0, ResMult = 0, ResDiv = 0, ResFato = 0, ResTer = 0, ResEx = 0, Resf = 0;
    int opcao;
    while (true)
    {
        opcao = 0;
        printf("\n ====== Calculadora ======= \n");
        printf("\n 1 --- Adicao");
        printf("\n 2 --- Subtracao");
        printf("\n 3 --- Multiplicacao");
        printf("\n 4 --- Divisao");
        printf("\n 5 --- Fatorial");
        printf("\n 6 --- Termial");
        printf("\n 7 --- Exponencial");
        printf("\n 8 --- Fibonucci");
        printf("\n 9 --- Sair");

        printf("\n Digite opcao desejada: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("\n ---------------- \n");
            printf("\n -= Adicao =- \n");
            printf("\n Digite numero 1: ");
            scanf("%f", &num1);
            printf("\n Digite numero 2: ");
            scanf("%f", &num2);
            ResSoma = Soma(num1, num2);
            printf("\n Resultado da %.2f + %.2f = %.2f", num1, num2, ResSoma);
            break;

        case 2:
            printf("\n --------------- \n");
            printf("\n -= Subtracao =- \n");
            printf("\n Digite numero 1: ");
            scanf("%f", &num1);
            printf("\n Digite numero 2: ");
            scanf("%f", &num2);
            ResulSub = Sub(num1, num2);
            printf("\n Resultado da %.2f - %.2f = %.2f", num1, num2, ResulSub);
            break;

        case 3:
            printf("\n ------------- \n");
            printf("\n -= Multiplicacao -= \n");
            printf("\n Digite numero 1: ");
            scanf("%f", &num1);
            printf("\n Digite numero 2: ");
            scanf("%f", &num2);
            ResMult = mult(num1, num2);
            printf("\n Resultado da %.2f X %.2f = %.2f", num1, num2, ResMult);
            break;

        case 4:
            printf("\n ------------ \n");
            printf("\n -= Divisao =- \n");
            printf("\n Digite numero 1: ");
            scanf("%f", &num1);
            printf("\n Digite numero 1: ");
            scanf("%f", &num2);
            ResDiv = Div(num1, num2);
            printf("\n Resultado da %.2f / %.2f = %.2f", num1, num2, ResDiv);
            break;

        case 5:
            printf("\n ------------ \n ");
            printf("\n -= Fatorial =- \n");
            printf("\n Digite numero 1º: ");
            scanf("%f", &num1);
            printf("\n Digite numero 2º: ");
            scanf("%f", &num2);
            ResFato = Fatorial(num1);
            printf("\n Fatorial: %.2f!", ResFato);
            break;

        case 6:
            printf("\n ------------ \n ");
            printf("\n -= Termial =-\n ");
            printf("\n Digite numero 1º: ");
            scanf("%f", &num1);
            printf("\n Digite numero 2º:");
            scanf("%f", &num2);
            ResTer = Termial(num1);
            printf("\n Termial: %.2f?", ResTer);
            break;

        case 7:
            printf("\n ------------ \n ");
            printf("\n -= Exponencial =- \n ");
            printf("\n Digite numero 1º: ");
            scanf("%f", &num1);
            printf("\n Digite numero 2º: ");
            scanf("%f", &num2);
            ResEx = Exponencial(num1, num2);
            printf("\n Exponencial: %.2f", ResEx);
            break;

        case 8:
            printf("\n ------------- \n");
            printf("\n -= Fibonucci =- \n");
            printf("\n Digite numero 1º: ");
            scanf("%f", &num1);
            printf("\n Digite numero 2º: ");
            scanf("%f", &num2);
            Resf = Fibonucci(num1);
            printf("\n Fibonucci: %.2f", Resf);
            break;
        case 9:
            printf("\n Saindo.........");
            return 0;
        }
    }
    return 0;
}

float Soma(float Num1, float Num2)
{
    if (Num2 == 0)
        return Num1;
    return Soma(Num1 + 1, Num2 - 1);
}

float Sub(float Num1, float Num2)
{
    if (Num2 == 0)
        return Num1;
    return Sub(Num1 - 1, Num2 - 1);
}

float mult(float Num1, float Num2)
{
    if (Num2 == 0)
        return 0;
    else if (Num2 == 1)
        return Num1;
    return Num1 * (Num1 - 1, Num2);
}

float Div(float Num1, float Num2)
{
    if (Num2 == 0)
        return 0;
    return Num1 / (Num1 - 1, Num2);
}

float Fatorial(float Num1)
{
    if (Num1 == 0 || Num1 == 1)
        return Num1;
    return Num1 * Fatorial(Num1 - 1);
}

float Termial(float Num1)
{
    if (Num1 == 0 || Num1 == 1)
        return Num1;
    return Num1 + Termial(Num1 - 1);
}

float Exponencial(float Num1, float Num2)
{
    if (Num2 == 0)
        return 1;
    else if (Num2 == 1)
        return Num1;
    return Num1 * Exponencial(Num1, Num2 - 1);
}

float Fibonucci(float Num1)
{
    if (Num1 == 1 || Num1 == 2)
        return 1;
    return Fibonucci(Num1 - 1) + Fibonucci(Num1 - 2);
}