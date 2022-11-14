#include <stdio.h>

union pessoa
{
    short int idade;
    unsigned char nome;
};
union tipo
{
    short int x;
    unsigned char c[2];
};

int main()
{
    /*
    union pessoa rick;

    // union : espaço para armazenar apenas o maior elemento - memoria compartilhada.
    // usar union quando tiver varias variaveis que nao serao usadas ao mesmo tempo.

    rick.idade = 18;
    rick.nome = 'a';//97
    printf("Idade = %d\n",rick.idade);
    printf("Nome = %c\n",rick.nome);
    */

    union tipo v;
    v.x = 1545; // ta dando errro com essa linha.
    printf("X = %d\n", v.x);
    v.c[0] = 'a';
    v.c[1] = 'b';
    printf("c[0] = %c\n", v.c[0]);
    printf("c[1]= %c\n", v.c[1]);
}