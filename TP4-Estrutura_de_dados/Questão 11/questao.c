#include <stdio.h>

int main() {
    int numeros[10];
    int i, j, contador;

    
    
    for (i = 0; i < 10; i++) {
    printf("Informe o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nQuantidade de vezes que cada numero apareceu:\n");

      for (i = 0; i < 10; i++) {
        contador = 0;

     
        for (j = 0; j < i; j++) {
            if (numeros[i] == numeros[j]) {
                contador = -1;
                break;
            }
        }

             if (contador != -1) {
            contador = 1; 
            for (j = i + 1; j < 10; j++) {
                if (numeros[i] == numeros[j]) {
                    contador++;
                }
            }
            printf("Numero %d apareceu %d vez(es)\n", numeros[i], contador);
        }
    }

    return 0;
}
