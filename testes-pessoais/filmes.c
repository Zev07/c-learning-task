#include <stdio.h>
#include <string.h>

#define MAX 100 

typedef struct {
    char nome[51];       
    int ano;             
    float notaMedia;     
    int qtdAvaliacoes;   
} Filme;

int cadastrarFilme(Filme filmes[], int *qtdFilmes) {
    if (*qtdFilmes >= MAX) {
        printf("Limite de filmes cadastrados atingido.\n");
        return 0;
    }

    printf("Digite o nome do filme: ");
    scanf(" %[^\n]", filmes[*qtdFilmes].nome);

    printf("Digite o ano de lancamento: ");
    scanf("%d", &filmes[*qtdFilmes].ano);

    filmes[*qtdFilmes].notaMedia = 0.0;
    filmes[*qtdFilmes].qtdAvaliacoes = 0;

    (*qtdFilmes)++;
    printf("Filme cadastrado com sucesso!\n");
    return 1;
}

int adicionarAvaliacao(Filme filmes[], int qtdFilmes) {
    char nomeFilme[51];
    float nota;
    int i, encontrado = 0;

    printf("Digite o nome do filme para avaliar: ");
    scanf(" %[^\n]", nomeFilme);

    for (i = 0; i < qtdFilmes; i++) {
        if (strcmp(filmes[i].nome, nomeFilme) == 0) {
            encontrado = 1;
            printf("Digite a nota (0 a 5): ");
            scanf("%f", &nota);

            if (nota < 0 || nota > 5) {
                printf("Nota invalida! Deve estar entre 0 e 5.\n");
                return 0;
            }

            
            filmes[i].notaMedia = 
                (filmes[i].notaMedia * filmes[i].qtdAvaliacoes + nota) / (filmes[i].qtdAvaliacoes + 1);
            filmes[i].qtdAvaliacoes++;

            printf("Avaliacao adicionada com sucesso!\n");
            return 1;
        }
    }

    if (!encontrado) {
        printf("Filme nao encontrado.\n");
        return 0;
    }
    return 0;
}

void exibirFilmes(Filme filmes[], int qtdFilmes) {
    if (qtdFilmes == 0) {
        printf("Nenhum filme cadastrado.\n");
        return;
    }

    printf("Filmes cadastrados:\n");
    for (int i = 0; i < qtdFilmes; i++) {
        printf("Nome: %s\n", filmes[i].nome);
        printf("Ano: %d\n", filmes[i].ano);
        printf("Quantidade de avaliacoes: %d\n", filmes[i].qtdAvaliacoes);
        printf("Nota media: %.2f\n\n", filmes[i].notaMedia);
    }
}


int main() {
    Filme filmes[MAX];
    int qtdFilmes = 0;
    int opcao;

    do {
        printf("\n--- Menu ---\n");
        printf("1. Cadastrar novo filme\n");
        printf("2. Adicionar avaliacao\n");
        printf("3. Exibir filmes cadastrados\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarFilme(filmes, &qtdFilmes);
                break;
            case 2:
                adicionarAvaliacao(filmes, qtdFilmes);
                break;
            case 3:
                exibirFilmes(filmes, qtdFilmes);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
