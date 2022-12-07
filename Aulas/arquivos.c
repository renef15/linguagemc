#include <stdio.h>

int main()
{
    // abrir um arquivo

/*  
    f = fopen("arquivo.txt", "w"); // para escrita
    f= fopen("arquivos.txt", "r"); // para leitura
    f = fopen("arquivos.txt", "rb");//leitura de arquivo binario
    f = fopen("arquivos.txt", "wb");// escrita de arquivo binario
    “r” (leitura): abre um arquivo para leitura. O arquivo deve existir.
    “r+” (leitura/atualização): abre um arquivo para atualização (leitura ou gravação)
    “w” (escrita): Cria um arquivo para escrita. Se um arquivo com mesmo nome existir, seu  conteúdo é descartado, e um novo arquivo em branco é criado.
    “w+” (escrita/atualização): cria um arquivo para atualização
    “a” (anexa): abre ou cria um arquivo para gravação no final.
    “a+” (anexa/atualização): cria um arquivo para atualização. Escrita realizada no final
*/
    FILE *f;
    f = fopen("arquivo.txt", "w");
    if (f == NULL)
    {
        printf("ERRO!\nO Arquivo nao existe");
        exit(1);
    }

    // fechar arquivo

    int fclose(FILE * f); // retorna zero se o arquivo for fechado corretamente

    return 0;
}
