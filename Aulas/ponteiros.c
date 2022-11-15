#include <stdio.h>
/*
tipo *nome_ponteiro;

Onde temos:

tipo : é o tipo de dado da variável cujo endereço o ponteiro armazena.

*nome_ponteiro : O nome da variável ponteiro.

O asterisco * neste tipo de declaração determina que a variável será um ponteiro.
*/
int main()
{
    // int *p = NULL; // inicializar o ponteiro.
    // int *p; Não inicializar ponteiro assim!
    /*
    int *p = NULL; // maneira correta de inicializar um ponteiro.
    int x = 10;
    p = &x;

    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("p =%d\n", p);
    printf("&x = %d\n", &x);
    */

    //  operacoes com ponteiros
    /*
    int *p = 0x5DC;
    printf("p = %d\n", p);
    p++;
    printf("p = %d\n", p);
    p += 15;
    printf("p = %d\n", p);
    p -= 2;
    printf("p = %d\n", p);

    int *ptr1, *ptr2, x, y;
    ptr1 = &x;
    ptr2 = &y;
    if (ptr1 == ptr2)
        printf("Ponteiros iguais");
    else
        printf("ponteiros difrenetes\n");

    if (ptr1 > ptr2)
        printf("p1 eh maior");
    else
        printf("p2 eh maior");
*/
    // ponteiro generico
    /*
        void *nome_do_ponteiro;
        void *v;
        void *pp;
        int *pi, pii = 10;
        pi = &pii;
        pp = &pii;
        printf("Endereco em pp: %p\n", pp);
        pp = &pi;
        printf("Endereco em pp: %p\n", pp);
        pp = pi;
        printf("Endereco em pp: %p\n", pp);

        //printf("conteudo : %d",*pp); //errado
        printf("conteudo : %d\n",*(int*)pp);
        // operecoes semelhantes ao de valores char
    */
    /* array : conjunto de dados armazenados de forma sequencial.*/
    /*int vet[5] = {1, 2, 3, 4, 5};
    int *p = vet;
    int i;
    for (i = 0; i < 5; i++)
        printf("%d\n", p[i]);// p[1] == *(p+i);
    printf("&vet[2] = %d", &vet[2]);
    printf("&vet[2] = %d", (vet+2));*/
    /*
    tambem podemos declarar um array de ponteiros
    */
    // forma geral:
    // tipo_dado *nome_array[tamanho];
    /*int *pvet[5];// array de 5 ponteiros
    int x = 10;
    int y[2]={20,30};
    pvet[0]=&x;
    pvet[1]=y;
    printf("pvet[0] = %p\n", pvet[0]);//&x
    printf("pvet[1] = %p\n", pvet[1]);//&y[0]

    printf("*pvet[0] = %d\n", *pvet[0]);//x
    printf("pvet[1][1] = %d\n", pvet[1][1]);//y[1]*/

    // ponteiro para ponteiro

    int x = 10;
    int *pl = &x;
    int **pll;
    int ***plll;
    // nao tme um limite de ponteiro de ponteiro.
}
