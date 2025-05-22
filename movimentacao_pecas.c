#include <stdio.h>

int main(){
    int bispo = 0;
    int rainha = 0;
    printf("** XADREZ **\n");
    //Movimentação torre, 5 casas para a direita
    printf("** TORRE **\n");
    for(int i = 0; i < 5; i++){
    printf("Direita\n");
    }
    
    //Movimentação bispo, 5 casas cima direita
    printf("\n** BISPO **\n");
    while(bispo < 5){
        bispo++;
        printf("Cima Direita\n");

    }

    //Movimentação rainha, 8 casas para direita
    printf("\n** RAINHA** \n");
    do{
        rainha++;
        printf("Esquerda\n");
    }while(rainha < 8);
    return 0;
}