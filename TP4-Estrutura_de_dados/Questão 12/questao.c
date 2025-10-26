#include <stdio.h>

int main() {
    int v1[5], v2[5];
    int i;
    int resultado = 0;
printf("Informe os elementos do primeiro vetor:\n");
       for (i = 0; i < 5; i++) {
       printf("Digite o %d numero: ", i + 1);
        scanf("%d", &v1[i]);
    }
        printf("Informe os elementos do segundo vetor:\n");
    for (i = 0; i < 5; i++) {
       printf("Informe o %d numero: ", i + 1);
      scanf("%d", &v2[i]);
    }
  
    for (i = 0; i < 5; i++) {
        resultado = resultado + (v1[i] * v2[i]);
    }

      printf("\nProduto escalar = %d\n", resultado);

    return 0;
}
