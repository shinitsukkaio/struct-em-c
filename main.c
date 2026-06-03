#include <stdio.h>

#define MAX 100

typedef struct {
    char nome[50];
    float preco;
    char placa[8];
    int id;
} Dados;

Dados carro[MAX];
int total = 0;

void criar() {
    if (total >= MAX){
        printf("\nLocadora lotada\n");
        return;
    }
    carro[total].id = total++;
    
    printf("\nNome do carro: \n");
    fgets(carro[total].nome, sizeof(carro[total].nome), stdin);
    
    printf("\nPreco do carro: \n");
    scanf("%f", &carro[total].preco);
    getchar();
    
    printf("\nPlaca do carro: ");
    fgets()
   
}

void listar() {

}

void excluir() {

}

void atualizar() {

}
int main() {
    int opcao;

    do {
        printf("\n0 - Sair\n");
        printf("1- Cadastrar\n");
        printf("2- Listar\n");
        printf("3- Atualizar\n");
        printf("4- Excluir\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: criar(); break;
            case 2: listar(); break;
            case 3: atualizar(); break;
            case 4: excluir(); break;
            case 0: printf("\nvoce saiu\n"); break;
            default: printf("\nOpcao invalida\n");
        }
    } while (opcao != 0);

    return 0;
}
