/*Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”
*/

#include <stdio.h>

int main() {
    double salario, prestacao;

    
    printf("Digite o salario do trabalhador: ");
    scanf("%lf", &salario);

    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%lf", &prestacao);

    double limite = 0.20 * salario;

    if (prestacao > limite) {
        printf("Emprestimo nao concedido.\n");
    } else {
        printf("Emprestimo concedido.\n");
    }

    return 0;
}