#include <stdio.h>
#include <string.h>

typedef struct
{
    char rua[50];
    int numero;
} endereco;

typedef struct
{
    char nome[50];
    int idade;
    endereco ender;
} pessoa;

int main()
{
    pessoa p;
    p.idade = 31;
    p.ender.numero = 101;

    printf("Nome: ");
    gets(p.nome);
    printf("Rua: ");
    gets(p.ender.rua);
    printf("Idade: ");
    scanf("%d", &p.idade);
    printf("Numero: ");
    scanf("%d", &p.ender.numero);
    printf("\n");

    printf("Seu nome eh %s, voce tem %d anos e voce mora na %s, numero %d.\n", p.nome, p.idade, p.ender.rua, p.ender.numero);
}