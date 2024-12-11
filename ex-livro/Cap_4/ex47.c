//Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, por exemplo). O usuário escolhe uma das opções, e o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado.

#include <stdio.h>

void menu() {
    printf("\n--- Menu ---\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("0 - Sair\n");
}

double soma(double a, double b) {
    return a + b;
}

double sub(double a, double b) {
    return a - b;
}

double multi(double a, double b) {
    return a * b;
}

double div(double a, double b) {
    if (b == 0) {
        printf("Erro: nao pode dividir por 0\n");
        return 0;
    }
    return a / b;
}

int main() {
    int opcao;
    double a, b, resultado = 0;

    do {
        menu();
        printf("\nDigite a sua opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("\nEncerrando o programa...\n");
            break;
        }

        if (opcao < 1 || opcao > 4) {
            printf("\nOpcao invalida! Tente novamente.\n");
            continue;
        }

        printf("Digite o primeiro numero: ");
        scanf("%lf", &a);
        printf("Digite o segundo numero: ");
        scanf("%lf", &b);

        switch (opcao) {
            case 1: 
                resultado = soma(a, b);
                printf("\nResultado da soma: %.2lf\n", resultado);
                break;
            case 2: 
                resultado = sub(a, b);
                printf("\nResultado da subtracao: %.2lf\n", resultado);
                break;
            case 3: 
                resultado = multi(a, b);
                printf("\nResultado da multiplicacao: %.2lf\n", resultado);
                break;
            case 4: 
                resultado = div(a, b);
                if (b != 0) {
                    printf("\nResultado da divisao: %.2lf\n", resultado);
                }
                break;
        }
    } while (opcao != 0);

    return 0;
}
