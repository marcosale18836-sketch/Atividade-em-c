#include <stdio.h>
//Marco Alexandro ENG-SOTFWARE
//Atividade 4

int main() {
    int A[5];
    int B[5];
    int iguais = 1;

    printf("Digite os 5 valores do estado A:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }

    printf("\nDigite os 5 valores do estado B:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (A[i] != B[i]) {
            iguais = 0;
            break;
        }
    }

    if (iguais == 1) {
        printf("\nReplay Perfeito\n");
    } else {
        printf("\nDesincronizado\n");
    }

    return 0;
}
