#include <stdio.h>
#include <string.h>

int main()
{
    // biblioteca string .h - funções
    // strlen - tamanho da string
    // strcpy - copiar uma string
    // strcat - concatenar duas strings
    // strcmp -comparar duas strings

    // declaração char nome_array[tamanho];
    // char nome[5] = {'c', 'i', 'n', 'c', 'o'};
    // char nome2[20] = "Renef";

    // lendo uma palara no teclado
    // printf("Digite um palavra: ");
    // scanf("%s", &palavra);
    // printf("Palavra lida: %s", palavra);
    int i = 0;
    char palavra[20];
    char palavra2[20];
    char novapalavra[30];
    char palavrax[20] = "Bom ";
    char palavray[30] = "dia";

    printf("Digite uma palavra: ");
    gets(&palavra); // gets so termina a litura dps de pressiornar enter - suporta varias palavras
    printf("Palavra lida: %s", palavra);
    for (i = 0; palavra[i] != '\0'; i++)
        palavra2[i] = palavra[i];
    palavra2[i] = '\0';
    printf("\nPalavra lida: %s", palavra2);
    printf("\n Tamanho = %d", strlen(palavra));
    // copiar string
    strcpy(novapalavra, palavra2);
    // concatenar string
    strcat(palavrax, palavray);
    printf("\nFrase = %s.", palavrax);

    // comparando duas strings
    if (strcmp(palavra2, novapalavra) == 0)
        printf("\nStrings iguais");
    else
        printf("\nStrings diferentes");
    return 0;
    printf("oi");
}