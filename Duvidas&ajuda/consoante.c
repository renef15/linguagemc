#include <stdio.h>

int consoante(char *palavra)
{
    int cont = 0;
    int i;
    int j;
    char letras[] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";

    for (i = 0; i < strlen(palavra); i++)
    {
        for (j = 0; j < strlen(letras); j++)
        {
            if (palavra[i] == letras[j])
            {
                cont++;
                break;
            }
        }
    }
    return cont;
}

int main()
{
    char *nome = (char *)malloc(15 * sizeof(char));

    printf("digite um nome: ");
    scanf("%s", nome);

    printf("a palavra tem %d consoantes", consoante(nome));
    return 0;
}