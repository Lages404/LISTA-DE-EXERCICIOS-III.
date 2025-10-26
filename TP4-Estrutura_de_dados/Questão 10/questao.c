#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
    int maior;

   
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Informe o %d elemento da matriz: ", i * 4 + j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

   
    printf("\nMaior valor de cada linha:\n");
    for (i = 0; i < 4; i++) {
        maior = matriz[i][0];
        for (j = 1; j < 4; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
        printf("Linha %d: %d\n", i, maior);
    }

    return 0;
}
