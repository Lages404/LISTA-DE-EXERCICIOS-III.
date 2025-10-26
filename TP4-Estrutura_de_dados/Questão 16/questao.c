#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int soma_linha, soma_coluna;
    int soma_diagonal1 = 0, soma_diagonal2 = 0;
    int soma_referencia;
    int eh_magico = 1;


    printf("Informe os numeros para matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    soma_referencia = 0;
    for (j = 0; j < 3; j++) {
        soma_referencia += matriz[0][j];
    }

    
    for (i = 1; i < 3; i++) {
        soma_linha = 0;
        for (j = 0; j < 3; j++) {
            soma_linha += matriz[i][j];
        }
        if (soma_linha != soma_referencia) {
            eh_magico = 0;
        }
    }

    
    for (j = 0; j < 3; j++) {
        soma_coluna = 0;
        for (i = 0; i < 3; i++) {
            soma_coluna += matriz[i][j];
        }
        if (soma_coluna != soma_referencia) {
            eh_magico = 0;
        }
    }

    
    for (i = 0; i < 3; i++) {
        soma_diagonal1 += matriz[i][i];
        soma_diagonal2 += matriz[i][2 - i];
    }

    if (soma_diagonal1 != soma_referencia || soma_diagonal2 != soma_referencia) {
        eh_magico = 0;
    }

    if (eh_magico == 1) {
        printf("\nA matriz e um quadrado magico!\n");
    } else {
        printf("\nA matriz nao e um quadrado magico.\n");
    }

    return 0;
}
