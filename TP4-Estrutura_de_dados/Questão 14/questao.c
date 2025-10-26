#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
    int soma = 0;

  
    printf("Informe os mumeros para matriz:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

      for (i = 0; i < 4; i++) {
        soma += matriz[i][i];
    }

    printf("\nA soma dos valores da diagonal principal e: %d\n", soma);

    return 0;
}
