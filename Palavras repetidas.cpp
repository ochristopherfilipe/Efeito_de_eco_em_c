#include <stdio.h>
#include <string.h>

int main() {
    char mensagem[100];

    // Lê o texto digitado até a tecla "enter" e armazena na variável mensagem
    scanf("%[^\n]", mensagem);

    char* palavra = strtok(mensagem, " ");

    while (palavra != NULL) {
        // Imprime a palavra duplicando-a e mantendo a formatação correta
        printf("%s %s ", palavra, palavra);

        // Obtém a próxima palavra usando a função strtok
        palavra = strtok(NULL, " ");
    }

    printf("\n");  // Imprime uma nova linha no final

    return 0;
}

