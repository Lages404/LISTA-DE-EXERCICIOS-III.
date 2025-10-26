#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, tamanho;
    int eh_palindromo = 1; 

    printf("Informe uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    for (i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            eh_palindromo = 0; 
            break;
        }
    }

    if (eh_palindromo == 1) {
        printf("A palavra '%s' e um palindromo.\n", palavra);
    } else {
        printf("A palavra '%s' nao e um palindromo.\n", palavra);
    }

    return 0;
}
