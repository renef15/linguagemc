#include <stdio.h>
#include <stdlib.h>

int compare(char *str1, char *str2, int tamanho)
{
    int i, cont;
    cont = 0;
    for (i = 0; i < tamanho; i++)
    {
        if (str1[i] == str2[i])
        {
            cont++;
        }
    }
    if (cont == tamanho)
    {

        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int tamanho_vetor, retorno;

    printf("Digite o quantas letras as palavras tem: ");
    scanf("%d", &tamanho_vetor);

    char *palavra1 = (char *)malloc(tamanho_vetor * sizeof(char));
    char *palavra2 = (char *)malloc(tamanho_vetor * sizeof(char));

    printf("Digite a palavra1: ");
    scanf("%s", palavra1);

    printf("Digite a palavra2: ");
    scanf("%s", palavra2);

    retorno = compare(palavra1, palavra2, tamanho_vetor);
    if (retorno == 0)
    {
        printf("As strings sao iguais.");
    }
    else
    {
        printf("As nao strings sao iguais");
    }
}
