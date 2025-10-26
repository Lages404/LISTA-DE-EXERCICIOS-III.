#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[100], c;
    int vogais = 0, consoantes = 0, i;

    printf("Informe uma palavra: ");
    scanf("%s", palavra);

    for (i = 0; i < strlen(palavra); i++) {
        c = palavra[i];

        if (isalpha(c)) { 
            if (c == 'a' || c == 'A' || 
                c == 'e' || c == 'E' ||
                c == 'i' || c == 'I' || 
                c == 'o' || c == 'O' ||
                c == 'u' || c == 'U') {
                vogais++;
            } else {
                consoantes++;
            }
        }
    }

    printf("\nA palavra \"%s\" tem:\n", palavra);
    printf("%d vogais\n", vogais);
    printf("%d consoantes\n", consoantes);

    return 0;
}
