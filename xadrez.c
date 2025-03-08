#include<stdio.h>

int main(){

    printf("**Mover Torre**\n"); //mover peça torre 5 casas a frente
    for (int i = 0; i < 5; i++){ 
       printf("Cima\n");
    }

    int i = 0;

    printf("**Mover Bisbo**\n"); //mover peça bisbo 5 casas na diagonal 
    while (i < 5){
        printf("Cima, Direita\n");
        i ++;
    }

    int mover = 0; 
    printf("**Mover Rainha**\n"); //mover rainha 8 casas para a esquerda

    do{
        printf("Esquerda\n");
        mover ++;
    } while (mover < 8);
     

    return 0;
}