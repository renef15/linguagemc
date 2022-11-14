#include <stdio.h>

// custo de carro

int main()
{
    float custo_de_fabrica = 0;
    float comissao = 0;
    float impostos = 0;
    float custo_final = 0;

    printf("Dgite o valor do carro: ");
    scanf("%f", &custo_de_fabrica);

    if (custo_de_fabrica <= 12000)
    {
        custo_final = custo_de_fabrica + (custo_de_fabrica * 0.05);
    }
    else if (custo_de_fabrica <= 25000)
    {
        comissao = custo_de_fabrica * 0.1;
        impostos = custo_de_fabrica * 0.15;
        custo_final = custo_de_fabrica + comissao + impostos;
    }
    else if (custo_de_fabrica >= 25000)
    {
        comissao = custo_de_fabrica * 0.15;
        impostos = custo_de_fabrica * 0.2;
        custo_final = custo_de_fabrica + comissao + impostos;
    }
    printf("O valor final eh de %0.2f", custo_final);
}