#include <stdio.h>
#include <string.h>

/*
struct nome struct
{
    tipo1 nome1;
    tipo2 nome2;
}
*/
// typedef so adiciona um novo nome para um tipo.
// ex typedef int inteiro;

struct pessoa
{
    char nome[50], rua[50];
    int idade, numero;
};

typedef struct pessoa individuo;
int main()
{
    // delcaração de variáveis
    /*individuo p;
    p.idade = 31;
    scanf("%d", &p.numero);
    gets(p.nome);
    p.numero = p.numero + p.idade - 100;
    */

    // inicializando struct
    individuo p;
    strcpy(p.nome, "Ricaro");
    strcpy(p.rua, "Rua 1");
    p.idade = 18;
    p.numero = 101;

    // inicialiazando struct

    individuo n = {"Ricado", "Rua 101", 31, 101};
    individuo p2;
    p = p2;

    // array com struct

    individuo p4[4];
    p4[0].idade = 31;
    p4[0].numero = 101;
    p4[1].numero = "Renef";

    individuo p5[4];
    int i;
    for (i = 0; i < 4; i++)
    {
        gets(p5[i].nome);
        scanf("%d", &p5[i].idade);
        gets(p5[i].rua);
        scanf("%d", &p5[i].numero);
    }
}

