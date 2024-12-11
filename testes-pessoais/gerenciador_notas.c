#include <stdio.h>
#include <stdlib.h>


typedef struct {
    char nome[50];
    float *notas; 
    int quantidadeNotas; 
} Aluno;

void inserirDados(Aluno *alunos, int quantidadeAlunos) {
    for (int i = 0; i < quantidadeAlunos; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);  
        
        printf("Digite a quantidade de notas do aluno %s: ", alunos[i].nome);
        scanf("%d", &alunos[i].quantidadeNotas);

        alunos[i].notas = (float *)malloc(alunos[i].quantidadeNotas * sizeof(float));
        if (alunos[i].notas == NULL) {
            printf("Erro ao alocar memoria para as notas.\n");
            exit(1);
        }

        for (int j = 0; j < alunos[i].quantidadeNotas; j++) {
            printf("Digite a nota %d do aluno %s: ", j + 1, alunos[i].nome);
            scanf("%f", &alunos[i].notas[j]);
        }
    }
}

float calcularMediaAluno(Aluno aluno) {
    float soma = 0.0;
    for (int i = 0; i < aluno.quantidadeNotas; i++) {
        soma += aluno.notas[i];
    }
    return soma / aluno.quantidadeNotas;
}

float calcularMediaGlobal(Aluno *alunos, int quantidadeAlunos) {
    float somaMedias = 0.0;
    for (int i = 0; i < quantidadeAlunos; i++) {
        somaMedias += calcularMediaAluno(alunos[i]);
    }
    return somaMedias / quantidadeAlunos;
}

void liberarMemoria(Aluno *alunos, int quantidadeAlunos) {
    for (int i = 0; i < quantidadeAlunos; i++) {
        free(alunos[i].notas); 
    }
    free(alunos); 
}

int main() {
    int quantidadeAlunos;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidadeAlunos);

    Aluno *alunos = (Aluno *)malloc(quantidadeAlunos * sizeof(Aluno));
    if (alunos == NULL) {
        printf("Erro ao alocar memoria para os alunos.\n");
        return 1;
    }

    inserirDados(alunos, quantidadeAlunos);

    printf("\nMedias dos alunos:\n");
    for (int i = 0; i < quantidadeAlunos; i++) {
        float media = calcularMediaAluno(alunos[i]);
        printf("Aluno: %s, Media: %.2f\n", alunos[i].nome, media);
    }
  
    float mediaGlobal = calcularMediaGlobal(alunos, quantidadeAlunos);
    printf("\nMedia global dos alunos: %.2f\n", mediaGlobal);

    liberarMemoria(alunos, quantidadeAlunos);

    return 0;
}
