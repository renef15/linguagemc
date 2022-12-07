#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f1, *f2;
    f1 = fopen("minusculo.txt", "r");
    f2 = fopen("maiusculo.txt", "w");
    if (f1 == NULL || f2 == NULL)
    {
        printf("ERRO!");
        exit(1);
    }

    int i;
    char c;
    char texto[200] = "mas voce pode enfrentar dificuldades ao escrever o conteudo de uma  struct. ";

    for (i = 0; i < strlen(texto); i++)
    {
        fputc(texto[i], f1);
    }
    c = fgetc(f1);
    while (c != EOF) // or while (!feof (f))
    {
        fputc(toupper(c), f2);
        c = fgetc(f1);
    }

    fclose(f1);
    return 0;
}