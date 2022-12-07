#include <stdio.h>

int main()
{

    char nome[15];
    char letras[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int cont = 0, i, j;

    printf("digite um nome: ");
    scanf("%s", nome);

    for (i = 0; i < strlen(nome); i++)
    {
        for (j = 0; j < strlen(letras); j++)
        {
            if (nome[i] == letras[j])
            {
                cont++;
                break;
            }
        }
    }
    printf("a palavra tem %d letras", cont);
    return 0;
}