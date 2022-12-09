#include <stdio.h>

typedef struct
{
    int num_of_points;
    int x;
    int y;
} point;

typedef struct
{
    int num_of_rect;
    point ponto1;
    point ponto2;
} rect;

int pt_in_rect(point *ponto, rect *retangulo, int n)
{
    int m;

    for (m = 0; m < ponto[0].num_of_points; m++)
    {
        if (ponto[m].x >= retangulo[n].ponto1.x && ponto[m].x <= retangulo[n].ponto2.x && ponto[m].y >= retangulo[n].ponto1.y && ponto[m].y <= retangulo[n].ponto2.y)
        {
            printf("O retangulo %d contem: %d\n", n, m);
        }
    }
}

int padroniza_ponto(rect *retangulo)
{
    int i, auxiliarx, auxiliary;

    for (i = 0; i < retangulo[0].num_of_rect; i++)
    {
        if (!(retangulo[i].ponto1.x <= retangulo[i].ponto2.x && retangulo[i].ponto1.y <= retangulo[i].ponto2.y))
        {
            retangulo[i].ponto1.x = auxiliarx;
            retangulo[i].ponto1.y = auxiliary;
            return retangulo[i].ponto1.x = retangulo[i].ponto2.x;
            return retangulo[i].ponto1.y = retangulo[i].ponto2.y;
            return retangulo[i].ponto2.x = auxiliarx;
            return retangulo[i].ponto2.y = auxiliary;
        }
    }
}

int main()
{
    int numero, i;
    FILE *arq = fopen("input.txt", "r");

    fscanf(arq, "%d", &numero);
    point *ponto = malloc(numero * sizeof(point));
    rect *retangulo = malloc(numero * sizeof(rect));

    for (i = 0; i < numero; i++)
    {
        fscanf(arq, "%d %d", &ponto[i].x, &ponto[i].y);
        ponto[i].num_of_points = numero;
    }

    for (i = 0; i < numero; i++)
    {
        fscanf(arq, "%d %d %d %d", &retangulo[i].ponto1.x, &retangulo[i].ponto1.y, &retangulo[i].ponto2.x, &retangulo[i].ponto2.y);
    }

    padroniza_ponto(retangulo);

    for (i = 0; i < numero; i++)
    {
        pt_in_rect(ponto, retangulo, i);
        retangulo[i].num_of_rect = numero;
    }

    fclose(arq);
    return 0;
}
