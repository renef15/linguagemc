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
    int *p = NULL; // maneira correta de inicializar um ponteiro.
    int x = 10;
    p = &x;

    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("p =%d\n", p);
    printf("&x = %d\n", &x);
}