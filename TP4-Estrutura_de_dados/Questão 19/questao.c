#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, contador = 0;

    printf("Informe uma palavra: ");
    scanf("%s", palavra);

    for (i = 0; i < strlen(palavra); i++) {
        if (palavra[i] == 'a' || palavra[i] == 'A') { 
            contador++;
        }
    }

    printf("A palavra tem %d letra(s) 'a'.\n", contador);

    return 0;
}
