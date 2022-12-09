#include <stdio.h>
#include <stdlib.h>

typedef struct ponto
{
    int x;
    int y;
} Ponto;

typedef struct retangulo
{
    Ponto p1;
    Ponto p2;
} Retangulo;

// troca os pontos dos retângulo se o segundo for menor que o primeiro
Retangulo canon_rect(Retangulo r)
{
    Ponto aux;
    if (r.p2.x <= r.p1.x && r.p2.y <= r.p1.y)
    {
        aux.x = r.p1.x;
        aux.y = r.p1.y;
        r.p1.x = r.p2.x;
        r.p1.y = r.p2.y;
        r.p2.x = aux.x;
        r.p2.y = aux.y;
        return r;
    }
    return r;
}

// testa se um ponto está no triângulo
int pt_in_rect(Ponto p, Retangulo r)
{
    r = canon_rect(r);
    if (p.x >= r.p1.x && p.x <= r.p2.x && p.y >= r.p1.y && p.y <= r.p2.y)
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    int n, *valores, nItens, valor, i = 0, j = 0, status;
    Ponto ponto, *pontos;
    Retangulo ret, *rets;
    FILE *arq1 = fopen("input.txt", "r");
    fscanf(arq1, "%d", &n);
    // calcula o número de posições que o vetor de valores vai ter
    nItens = n * 2 + n * 4;
    valores = (int *)malloc(sizeof(int) * nItens);
    pontos = (Ponto *)malloc(sizeof(Ponto) * n);
    rets = (Retangulo *)malloc(sizeof(Retangulo) * n);

    if (arq1 != NULL)
    {
        // ler todos os valores do arquivo depois do primeiro e guarda no vetor de valores
        while (fscanf(arq1, "%d", &valor) == 1)
        {
            valores[i] = valor;
            i++;
        }
    }

    // separa o que é ponto no vetor de valores e coloca no vetor de pontos
    for (i = 0; i < n * 2; i += 2)
    {
        ponto.x = valores[i];
        ponto.y = valores[i + 1];
        pontos[j] = ponto;
        j++;
    }
    j = 0;

    // separa o que é retângulo no vetor de valores e coloca no vetor de retângulos
    for (i = n * 2; i < nItens; i += 4)
    {
        ret.p1.x = valores[i];
        ret.p1.y = valores[i + 1];
        ret.p2.x = valores[i + 2];
        ret.p2.y = valores[i + 3];
        rets[j] = ret;
        j++;
    }

    // testa todos os pontos com cada retângulo
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            status = pt_in_rect(pontos[j], rets[i]);
            if (status == 1)
            {
                printf("O ponto %d pertence ao retangulo %d\n", j, i);
            }
        }
    }
    free(valores);
    free(rets);
    free(pontos);

    fclose(arq1);
    return 0;
}