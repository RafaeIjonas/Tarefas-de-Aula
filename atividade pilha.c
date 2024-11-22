#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Definindo um tamanho máximo para a pilha

typedef struct {
    int items[MAX];
    int top;
} Pilha;

// Função para inicializar a pilha
void inicializarPilha(Pilha *p) {
    p->top = -1; // Pilha vazia
}

// Função para verificar se a pilha está cheia
int pilhaCheia(Pilha *p) {
    return p->top == MAX - 1;
}

// Função para verificar se a pilha está vazia
int pilhaVazia(Pilha *p) {
    return p->top == -1;
}

// Função para empilhar um elemento
void empilhar(Pilha *p, int valor) {
    if (!pilhaCheia(p)) {
        p->items[++(p->top)] = valor;
    } else {
        printf("Pilha cheia!\n");
    }
}

// Função para desempilhar um elemento
int desempilhar(Pilha *p) {
    if (!pilhaVazia(p)) {
        return p->items[(p->top)--];
    } else {
        printf("Pilha vazia!\n");
        return -1; // Retorna um valor inválido
    }
}

// Função para imprimir a pilha
void imprimirPilha(Pilha *p) {
    if (pilhaVazia(p)) {
        printf("Pilha vazia\n");
    } else {
        for (int i = 0; i <= p->top; i++) {
            printf("%d ", p->items[i]);
        }
        printf("\n");
    }
}

int main() {
    Pilha pilha;
    inicializarPilha(&pilha);

    int n, x, valor;

    // Leitura da quantidade de elementos
    scanf("%d", &n);

    // Leitura dos elementos
    for (int i = 0; i < n; i++) {
        scanf("%d", &valor);
        empilhar(&pilha, valor);
    }

    // Leitura da quantidade de ações
    scanf("%d", &x);

    // Execução das ações
    for (int i = 0; i < x; i++) {
        int acao;
        scanf("%d", &acao);

        if (acao == 1) {
            desempilhar(&pilha);
        } else if (acao == 2) {
            scanf("%d", &valor);
            empilhar(&pilha, valor);
        } else {
            printf("Ação inválida!\n");
        }
    }

    // Impressão da pilha final
    imprimirPilha(&pilha);

    return 0;
}