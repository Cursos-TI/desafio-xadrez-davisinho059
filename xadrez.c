#include <stdio.h>
// variaveis de controle para cada peça
int main() {
    int bispo = 0;
    int torre = 1;
    int rainha = 1;
    char cavalo = 0;
    char movimentocompleto= 1;//flag para controlar o movimento em 'L'

    printf("movimentos das peças de xadrez\n");
    
    // BISPO com FOR 5 casas na diagonal cima-direita
    for (bispo = 1; bispo <=5; bispo++ ) {
         printf("bispo, cima direita %d\n", bispo);
    }
            
    // TORRE com WHILE 5 casas para a direita
   while (torre <= 5){
       printf("torre, direita %d\n", torre);
       torre++;
    }
   
   // rainha com DO-WHILE (8 casas para a esquerda)
   do {
        printf("rainha, esquerda %d\n",rainha);
        rainha ++;
 } while(rainha <= 8);
   printf("\n"); //Separa o movimento do Cavalo dos movimentos anteriores com uma linha em branco.

// cavalo com for (direçao formato L)
 while (movimentocompleto--)
  {
     for (cavalo = 0; cavalo < 2; cavalo++) {
          printf("L,baixo\n"); // imprime baixo duas vezes
     }
     printf("L,esquerda\n"); // imprime "esquerda" uma vez
     }
  return 0;
}



    