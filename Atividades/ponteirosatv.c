#include <stdio.h>

void troca_valores(int *ptrx, int *ptry)

{
    int auxiliar;

    // auxiliar recebe o conteúdo apontado por ptrx
    auxiliar = *ptrx;

    // coloca o valor que está no local apontado por ptry em ptrx
    *ptrx = *ptry;

    // finalmente, ptry recebe o valor armazenado em auxiliar
    *ptry = auxiliar;

    return;
}

int main()
{
    int a, b;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Voce digitou os valores na seguinte ordem: %d e %d\n", a, b);
    troca_valores(&a, &b);

    // Exibindo os valores já trocados após a chamada da função
    printf("Os valores trocados sao: %d e %d\n", a, b);

    char alfabeto[] = "abcdefghijklmnopqrstuvwxyz";
    char *elemento;
    elemento = &alfabeto[0];

    for (int i = 0; i < strlen(alfabeto); i++)
    {
        printf("%c \n", *elemento);
        elemento++;
    }
}