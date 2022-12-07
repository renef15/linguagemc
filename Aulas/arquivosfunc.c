#include <stdio.h>
#include <string.h>

int main()
{
    // colocando um caracter por vez em um arquivo // fputc / pegando 
    FILE *f;
    f = fopen("arquivo.txt", "r"); // "r" para ler | "w" para escrever;
    if (f == NULL)
    {
        printf("ERRO!");
        exit(1);
    }

    /* char texto[20] = "renef ricardo costa da silva";
     int i;

     for (i = 0; i < strlen(texto); i++)
     {

         fputc(texto[i], f);
     }
     */

    // lendo caracter por vez

    int i = 0;
    char c;

    /*for (i = 1; i < 10; i++)
    {
        c = fgetc(f);
        printf("%c", c);
    }
    printf("\nFim");*/

    // lendo todo o conteudo do arquivo // fgetc

    while (c!= EOF) // or while (!feof (f))
    {
        printf("%c",c);
        c = fgetc(f);
    }
    printf("\nFim\n");
    

    fclose(f);

    return 0;
}