/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro.

Estados: MG,SP,RJ,MS
Imposto: 7%,12%,15%,8%*/

#include <stdio.h>
#include <string.h>

int main (){

    double valor,precofinal;

    char estado[3];

    printf("Digite o valor do produto: ");
    scanf("%lf",&valor);

    printf("Digite o estado de destino (MG, SP, RJ, MS): ");
    scanf(" %s", estado);

    if (strcmp(estado,"MG") == 0) {
        precofinal = valor + (valor * 0.07);
        printf("Preco final com imposto: %.2lf\n",precofinal);
    }
    else if (strcmp(estado,"SP") == 0) {
        precofinal = valor + (valor * 0.12);
        printf("Preco final com imposto: %.2lf\n",precofinal);
    }
    else if (strcmp(estado,"RJ") == 0) {
        precofinal = valor + (valor * 0.15);
        printf("Preco final com imposto: %.2lf\n",precofinal);
    }
    else if (strcmp(estado, "MS") == 0){
        precofinal = valor + (valor * 0.08);
        printf("Preco final com imposto: %.2lf\n",precofinal);
    }
    else {
        printf("Erro: estado invalido. \n");
    }

    return 0;
}