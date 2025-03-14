#include <stdio.h>
 
void cima(int casas){
    if (casas > 0){
        printf("Cima\n");
        cima(casas-1);
    }
}

void esquerda(int casas){
    if (casas > 0){
        printf("Esquerda\n");
        esquerda(casas-1);
    }
}

void direita(int casas){
    if (casas > 0){
        printf("Direita\n");
        direita(casas-1);
    }
}
void direitaCima(int casas){
    if (casas > 0){
        printf("Cima ,Direita\n");
        direitaCima(casas-1);
    }
}

int main() {

    int movimentos = 5;
    printf("**Mover Torre**\n"); //mover peça torre 5 casas pra cima
    cima(movimentos);
    printf("\n");

    printf("**Mover Rainha**\n"); //mover peça rainha 8 casas para a esquerda
    movimentos = 8;
    esquerda(movimentos);
    printf("\n");

    printf("**Mover Bisbo**\n"); //mover peça bisbo 5 casas na diagonal
    movimentos = 5;
    direitaCima(movimentos);
    printf("\n");


    printf("**Mover Cavalo**\n"); //mover peça cavalo 2 casas para cima e uma para direita ussando loops aninhados
    for (int i = 0; i < 1; i++){
        for (int j = 0; j < 2; j++){
            printf("Cima\n");
        }
        printf("Direita\n");
        
    }
    printf("\n");

    printf("**Mover Bisbo**\n"); //mover peça bisbo 5 casas na diagonal ussando loops aninhados
    int i=1;
    while (i <= 5){ //loop externo
        int j = 1; //variavel local
        while (j <= 1) //loop interno
        {
            movimentos = 1;
            direita(movimentos);
            j++; //incremento loop interno
           
        }

        movimentos = 1;
        cima(movimentos);
        i++; //incremento loop externo
    }

    return 0;
}