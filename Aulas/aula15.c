#include <stdio.h>

// Salario

int main()
{
    float salario_atual = 0;
    float tempo_de_servico = 0;
    float bonus = 0;

    printf("Para descobrir seu novo salario e um possivel bonus digite seu salario atual e seu tempo de trabalho na empresa: ");
    scanf("%f %f", &salario_atual, &tempo_de_servico);

    if (salario_atual <= 500 )
    {

        salario_atual += (salario_atual * 0.25);
    }
    else if (salario_atual <= 1000)
    {

        salario_atual += (salario_atual * 0.2);
    }
    else if (salario_atual <= 1500)
    {

        salario_atual += (salario_atual * 0.15);
    }
    else if (salario_atual <= 2000)
    {

        salario_atual += (salario_atual * 0.10);
    }
    else
    {
        salario_atual = salario_atual;
    }
    if (tempo_de_servico < 1)
    {
        bonus = 0;
    }
    else if (tempo_de_servico <= 3)
    {
        bonus = 100;
    }
    else if (tempo_de_servico <= 6)
    {
        bonus = 200;
    }
    else if (tempo_de_servico <= 10)
    {
        bonus = 300;
    }
    else if (tempo_de_servico >= 10)
    {
        bonus = 500;
    }

    printf("Seu salario agora eh de %0.2f e voce tem um bonus de %0.2f.", salario_atual, bonus);

    return 0;
}