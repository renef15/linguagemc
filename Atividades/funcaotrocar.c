#include <stdio.h>
/*
Fac¸a um programa que leia 2 valores inteiros e chame uma func¸ao que receba estas ˜
2 variaveis e troque o seu conte ´ udo, ou seja, esta func¸ ´ ao˜ e chamada passando duas ´
variaveis A e B por exemplo e, ap ´ os a execuc¸ ´ ao da func¸ ˜ ao, A conter ˜ a o valor de B e B ´
tera o valor de A.
*/

int trocavalor(int *ptrx, int *ptry)
{
    int auxiliar = 0;
    auxiliar = *ptrx;
    *ptrx = *ptry;
    *ptry = auxiliar;
}
/*Fac¸a um programa que leia dois valores inteiros e chame uma func¸ao que receba estes ˜
2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na ´
segunda variavel. Escreva o conte ´ udo das 2 vari ´ aveis na tela.*/
int maior(int *ptrx, int *ptry)
{
    int aux = 0;
    if (*ptrx < *ptry)
    {
        aux = *ptry;
        *ptry = *ptrx;
        *ptrx = aux;
    }
    return;
}
/*Elaborar um programa que leia dois valores inteiros (A e B). Em seguida fac¸a uma func¸ao˜
que retorne a soma do dobro dos dois numeros lidos. A func¸ ´ ao dever ˜ a armazenar o dobro ´
de A na propria vari ´ avel A e o dobro de B na pr ´ opria vari ´ avel B.*/
int sumdobro(int *ptrx, int *ptry)
{
    int dobro;
    *ptrx *= 2;
    *ptry *= 2;
    dobro = *ptrx + *ptry;
    return dobro;
}
int somaA(int *ptrx, int *ptry)
{
    *ptrx += *ptry;
}

int main()
{
    int vetor[5] = {0, 1, 2, 3, 4};
    int *ptrv;
    ptrv = &vetor[0];
    for (int i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++)
    {
        printf("%d\n", *ptrv);
        ptrv++;
    }

    // int num1 = 0;
    // int num2 = 0;
    // printf("Digite dois numeros: ");
    // scanf("%d %d", &num1, &num2);
    // somaA(&num1,&num2);
    // printf("A soma dos dois numeros eh de %d e %d eh %d.", num1 - num2, num2, num1);
    //  printf("Os dobros dos numeros digitados sao, respectivamente: %d e %d.\nJa a soma do dobro desses dois numeros eh %d.", num1, num2, sumdobro(&num1, &num2));
    /*printf("Voce digitou os numeros nessa ordem %d e %d.\n", num1, num2);
    trocavalor(&num1, &num2);
    printf("Os numeros na ordem inversa ficam: %d e %d.\n", num1, num2);
    maior(&num1, &num2);
    printf("O numero %d eh o maior.\nO numero %d eh o menor.\n ", num1, num2);*/
}