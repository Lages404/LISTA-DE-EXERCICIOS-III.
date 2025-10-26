#include <stdio.h>
#include <string.h>

int main()
{
    char n[1000];
    int i = 0, digitos = 0;

    printf("Informe um numero: ");
    scanf("%s", n);

    for (i = 0; i < strlen(n); i++) {
        if (n[i] >= '0' && n[i] <= '9') {
            digitos++;
        }
    }

    printf("O numero %s tem %d digitos.\n", n, digitos);
    return 0;
}
