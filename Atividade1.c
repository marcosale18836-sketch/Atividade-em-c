#include <stdio.h>

//Marco Alexandro ENG-SOFTWARE

//Atividade 2


int main() {

    int X[6]; 

    int Y[6]; 

    

    int D[6]; 


    printf("Digite todos os 6 valores de ataque X:\n");

    for (int i = 0; i < 6; i++) {

        scanf("%d", &X[i]);

    }

    

    printf("\nDigite todos os 6 valores de defesa Y:\n");

    for (int i = 0; i < 6; i++) {

        scanf("%d", &Y[i]);

    }    

    for (int i = 0; i < 6; i++) {

        D[i] = X[i] - Y[i];

    }

    

    printf("\nDano Efetivo D:\n");

    for (int i = 0; i < 6; i++) {

        printf("%d ", D[i]);

    }


    printf("\n");

    return 0;

}
