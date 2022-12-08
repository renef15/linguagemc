#include <stdio.h>
#include <string.h>

typedef struct
{
    int x;
    int y;
} point;

typedef struct
{
    point ponto1;
    point ponto2;
} rect;

int pt_in_rect(point *ponto, rect *retangulo, int numero, int n)
{
    int m, retorno;
    for (m = 0; m < numero; m++)
    {

        if (ponto[m].x >= retangulo[n].ponto1.x && ponto[m].x <= retangulo[n].ponto2.x && ponto[m].y >= retangulo[n].ponto1.y && ponto[m].y <= retangulo[n].ponto2.y)
        {
            printf("O retangulo %d contem: %d\n", n, m);
        }
    }
}
int main()
{
    FILE *arq = fopen("input.txt", "r");
    if (arq == NULL)
    {
        printf("ERRO!\nProblema ao abrir o arquivo.");
        system("pause");
        exit(1);
    }

    int numero, i, j;

    fscanf(arq, "%d", &numero);

    point ponto[numero];
    rect retangulo[numero];

    for (i = 0; i < numero; i++)
    {
        fscanf(arq, "%d %d", &ponto[i].x, &ponto[i].y);
    }

    for (i = 0; i < numero; i++)
    {
        fscanf(arq, "%d %d %d %d", &retangulo[i].ponto1.x, &retangulo[i].ponto1.y, &retangulo[i].ponto2.x, &retangulo[i].ponto2.y);
    }
    for (i = 0; i < numero; i++)
    {
        pt_in_rect(ponto, retangulo, numero, i);
    }
    fclose(arq);
    return 0;
}