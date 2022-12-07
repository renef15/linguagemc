#include <stdio.h>

int main()
{
    char str[30];
    FILE *f;
    f = fopen("arq1.txt", "r");
    if (f == NULL)
    {
        printf("ERRO!");
        exit(1);
    }
    char *resultado = fgets(str, 21, f); // sempre le um  a menos entoa vai ler so 20;
    if (resultado == NULL)
    {
        printf("ERRO!\nProblema ao abrir o arquivo.");
    }
    else
    {
        printf("%s", str);
    }
    printf("\n");

    fclose(f);
    return 0;
}