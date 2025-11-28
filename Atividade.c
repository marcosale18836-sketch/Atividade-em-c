#include <stdio.h>
//Marco Alexandro ENG-SOFTWARE
//Atividade 1

int main() {
    int A[5];   
    int B[5]; 
   
    int soma[5];   

     printf("Digite os 5 atributos base A:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }

    printf("\nDigite os 5 atributos do equipamento B:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 5; i++) {
        soma[i] = A[i] + B[i];
    }

    printf("\nStatus Final do Personagem:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", soma[i]);
    }

    printf("\n");
    return 0;
}
