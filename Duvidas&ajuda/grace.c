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

int pt_in_rect(Ponto p, Retangulo r)
{
    if (p.x >= r.p1.x && p.x <= r.p2.x && p.y >= r.p1.y && p.y <= r.p2.y)
    {
        return 1;
    }
    return 0;
}

int main(void)
{

    FILE *file = fopen("input.txt", "r");
    if (file == NULL)
    {
        printf("ERRO AO ABRIR ARQUIVO");
    }

    int num, i = 0, j = 0, retorno;
    fscanf(file, "%d", &num);

    int quantnum = (num * 2) + (num * 4);

    int *dados = (int *)malloc(quantnum * sizeof(int));

    for (i = 0; i < quantnum; i++)
    {
        fscanf(file, "%d", &dados[i]);
    }
    Ponto ponto;
    Ponto *pontos = (Ponto *)malloc(num * sizeof(Ponto));
    for (i = 0; i < num * 2; i += 2)
    {
        ponto.x = dados[i];
        ponto.y = dados[i + 1];
        pontos[j] = ponto;
        j++;
    }

    j = 0;

    Retangulo rect;
    Retangulo *rects = (Retangulo *)malloc(num * sizeof(Retangulo));
    for (i = num * 2; i < quantnum; i += 4)
    {
        rect.p1.x = dados[i];
        rect.p1.y = dados[i + 1];
        rect.p2.x = dados[i + 2];
        rect.p2.y = dados[i + 3];
        rects[j] = rect;
        j++;
    }

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            retorno = pt_in_rect(pontos[i], rects[j]);
            if (retorno == 1)
            {
                printf("o ponto %d esta no retangulo %d\n", i, j);
            }
        }
    }

    free(dados);
    free(pontos);
    free(rects);

    fclose(file);
    return 0;
}