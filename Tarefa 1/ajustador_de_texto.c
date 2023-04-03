#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char nome[100];
    int espaco = 1;
    int i;

    printf("Digite um texto curto: ");
    fgets(nome, 100, stdin);

    int tamanho = strlen(nome);    

    for (i = 0; i < tamanho; i++) 
    {
        if (espaco) 
        {
            nome[i] = toupper(nome[i]);
            espaco = 0;
        }
        if (nome[i] == ' ') 
        {
            espaco = 1;
        }
    }

    printf("Texto corrigido: %s", nome);

    return 0;
}