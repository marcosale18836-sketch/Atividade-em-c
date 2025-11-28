#include <stdio.h>

//Marco Alexandro ENG-SOFTWARE

//Atividade 3


int main() {

    int A[4]; 

    int B[4]; 

   

    int M[4];

    

    printf("Digite os 4 valores do dano base A:\n");

    for (int i = 0; i < 4; i++) {

        scanf("%d", &A[i]);

    }

    

    printf("\nDigite os 4 valores do fator de bonus B:\n");

    for (int i = 0; i < 4; i++) {

        scanf("%d", &B[i]);

    }


    for (int i = 0; i < 4; i++) {

        M[i] = A[i] * B[i];

    }


    printf("\nDano Multiplicado M:\n");

    for (int i = 0; i < 4; i++) {

        printf("%d ", M[i]);

    }


    printf("\n");

    return 0;

}


