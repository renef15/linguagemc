#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "Linguagem C";
    char str2[20];
    int i, j = 0;
    char c;
    int tamanho = strlen(str);

    // invertendo na tela;
    for (i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    // invertendo no programa sem vetor auxiliar
    for (i = 0; i < tamanho / 2; i++)
    {
        c = str[i];
        str[i] = str[tamanho - 1 - i];
        str[tamanho - 1 - i] = c;
    }
    printf("\nstr = %s", str);
    // invertendo no programa;
    for (i = strlen(str) - 1; i >= 0; i--)
    {
        str2[j] = str[i];
        j++;
    }
    str2[j] = '\0';
    printf("str2 = %s", str2);
}