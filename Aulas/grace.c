#include <stdio.h>

int main(void)
{

    int j = 0, tam = 4, i;
    char nome[5] = "radar";
    char aux[5];
    int cont = 0;

    for (i = tam; i >= 0; i--)
    {
        aux[j] = nome[i];
        j++;
    }
    aux[j] = '\0';
    printf("%s\n", aux);

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            if (nome[i] == aux[j])
                cont += 1;
        }
    }
    if (cont == tam + 1)
    {
        printf("eh palindromo");
    }
    else
    {
        printf("n eh palindromo");
    }

    return 0;
}
