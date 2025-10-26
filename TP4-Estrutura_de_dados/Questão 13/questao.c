#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int soma, maior_soma = 0, linha_maior = 0;

     
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

  
    for (i = 0; i < 3; i++) {
        soma = 0;
        for (j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }

        printf("Soma da linha %d = %d\n", i, soma);

          if (i == 0 || soma > maior_soma) {
            maior_soma = soma;
            linha_maior = i;
        }
    }

    printf("\nA linha com a maior soma e a linha %d (soma = %d)\n", linha_maior, maior_soma);

    return 0;
}
