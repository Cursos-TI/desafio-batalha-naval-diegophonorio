#include <stdio.h>

#define TAMANHO 5
#define NAVIO_TAMANHO 3

int tabuleiro[TAMANHO][TAMANHO];

void inicializarTabuleiro() {
    int i, j;
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0; // 0 = Água
        }
    }
}

void posicionarNavioHorizontal() {
    int linha_inicio = 1;
    int coluna_inicio = 0;
    int k;
    
    printf("\n-- Posicionamento Navio Horizontal (Tamanho %d) --\n", NAVIO_TAMANHO);
    for (k = 0; k < NAVIO_TAMANHO; k++) {
        if (coluna_inicio + k < TAMANHO) {
            tabuleiro[linha_inicio][coluna_inicio + k] = 1;
            printf("Coordenada: (%d, %d)\n", linha_inicio, coluna_inicio + k);
        }
    }
}

void posicionarNavioVertical() {
    int linha_inicio = 0;
    int coluna_inicio = 4;
    int k;

    printf("\n-- Posicionamento Navio Vertical (Tamanho %d) --\n", NAVIO_TAMANHO);
    for (k = 0; k < NAVIO_TAMANHO; k++) {
        if (linha_inicio + k < TAMANHO) {
            tabuleiro[linha_inicio + k][coluna_inicio] = 1;
            printf("Coordenada: (%d, %d)\n", linha_inicio + k, coluna_inicio);
        }
    }
}

void exibirTabuleiro() {
    int i, j;
    printf("\n--- Tabuleiro (%dx%d) ---\n", TAMANHO, TAMANHO);
    printf("  ");
    for (j = 0; j < TAMANHO; j++) {
        printf(" %d", j);
    }
    printf("\n");

    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", i);
        for (j = 0; j < TAMANHO; j++) {
            if (tabuleiro[i][j] == 1) {
                printf(" N");
            } else {
                printf(" ~");
            }
        }
        printf("\n");
    }
    printf("---------------------------\n");
}

int main() {
    
    printf("🤖 Iniciando o Desafio Batalha Naval - Nível Novato...\n");
    
    inicializarTabuleiro();
    
    posicionarNavioHorizontal();
    posicionarNavioVertical();
    
    exibirTabuleiro();
    
    return 0;
}
