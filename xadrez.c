#include <stdio.h>
// variaveis de controle para cada peça
int main() {
    int bispo = 0;
    int torre = 1;
    int rainha = 1;
    
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

  return 0;
}



    
