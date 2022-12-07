#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f;
    f = fopen("arq1.txt","w");
    if (f == NULL)
    {
        printf("ERRO!");
        exit(1);
    }

    char texto[20] = "hello world!";
    //grava toda a string de uma vez | observar bem os parametros
    int retorno = fputs(texto,f);
    fputs("Deu",f);
    fputs("certo",f);
    if(retorno == EOF){
        printf("ERRO!\nFalha na gravacao!");
    }

    fclose(f);
    return 0;
}