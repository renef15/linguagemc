#include <stdio.h>

// malloc - aloca memoria durante a execucao do programa. retorna um ponteiro com o endereco do inicio do espaco de memoria alocado.
// calloc - mesma coisa do malloc, mas com sintaxe diferente.
// realloc - muda o tamanho de espao na memoria separado inicialmente
// free - libera a memoria alocada ; sintaxe : free(variavel)

int main()
{
    // malloc
    void *malloc(unsigned int num);
    // criar array com 50 inteiros (200 bytes)
    int *v = malloc(200);

    // criar um array de 200 char (200 bytes)
    char *c = malloc(200);

    // usando o sizeof

    int *v1 = malloc(50 * sizeof(int));
    char *c1 = malloc(50 * sizeof(char));

    // calloc
    int *n = (int *)calloc(50, 4);
    char *m = (char *)calloc(200, 1);

    // usando o sizeof
    int *n1 = (int *)calloc(50, sizeof(int));
    char *m1 = (char *)calloc(200, sizeof(char));

    // realloc
    int *x = (int *)malloc(200);
    x = (int *)realloc(x, 400);

    // usando o sizeof
    int x1 = (int *)malloc(50 * sizeof(int));
    x1 = (int *)realloc(100 * sizeof(int));
    return 0;
}