#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int telefone;
    char nome[100];
} Pessoa;

void add_pessoa(Pessoa* agenda, Pessoa p, int indice)
{
    strcpy(agenda[indice].nome, p.nome);
    agenda[indice].telefone = p.telefone;
}

int main()
{
    int n = 3;
    Pessoa* agenda = NULL;

    //alocar agenda para n pessoas
    agenda = malloc(n*sizeof(Pessoa));


    //adicionar 1 pessoa
    int indice=0;
    for(indice=0; indice<n; ++indice)
    {
        Pesso
