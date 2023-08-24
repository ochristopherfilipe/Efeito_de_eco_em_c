#include <stdio.h>
#include <string.h>

int main() {
    char mensagem[100];

    // L� o texto digitado at� a tecla "enter" e armazena na vari�vel mensagem
    scanf("%[^\n]", mensagem);

    char* palavra = strtok(mensagem, " ");

    while (palavra != NULL) {
        // Imprime a palavra duplicando-a e mantendo a formata��o correta
        printf("%s %s ", palavra, palavra);

        // Obt�m a pr�xima palavra usando a fun��o strtok
        palavra = strtok(NULL, " ");
    }

    printf("\n");  // Imprime uma nova linha no final

    return 0;
}

