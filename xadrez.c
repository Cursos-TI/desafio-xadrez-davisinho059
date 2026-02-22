#include <stdio.h>

// BISPO com recursividade + loops aninhados
void moverbispo(int vertical, int horizontal) {
    if (vertical > 0 && horizontal > 0) {
        for (int i = 0; i < vertical; i++) {
            for (int j = 0; j < horizontal; j++) {
                printf("Cima-direita\n");
            }
        }
        moverbispo(vertical - 1, horizontal - 1);
    }
}

// TORRE com recursividade
void movertorre(int torre) {
    if (torre <= 5) {
        printf("Direita\n");
        movertorre(torre + 1);
    }
}

// RAINHA com recursividade (8 vezes para a esquerda)
void moverrainha(int rainha) {
    if (rainha <= 8) {
        printf("Esquerda\n");
        moverrainha(rainha + 1);
    }
}

// CAVALO com loops complexos
void movercavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    for (int j = 0; j < 2; j++) {
        if (j == 0) {
            printf("Direita\n");
        } else if (j > 1) {
            break;
        } else {
            continue;
        }
    }
}

int main() {
    printf("Movimentos das peças de xadrez\n\n");

    printf("Bispo:\n");
    moverbispo(3, 3);
    printf("\n");

    printf("Torre:\n");
    movertorre(1);
    printf("\n");

    printf("Rainha:\n");
    moverrainha(1);
    printf("\n");

    printf("Cavalo:\n");
    movercavalo();
    printf("\n");

    return 0;
}
