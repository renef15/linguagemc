#include <stdio.h>
#include <stdlib.h>

// estruturas para guardar as coordenadas dos pontos.
typedef struct
{
    int x;
    int y;
} point;

// estrutura para guardar os pontos do retângulo.
typedef struct
{
    int num_of_rect;
    point ponto1;
    point ponto2;
} rect;

// função que verifica se um ponto esta em um retângulo.
int pt_in_rect(point ponto, rect retangulo)
{
    if (ponto.x >= retangulo.ponto1.x && ponto.x <= retangulo.ponto2.x && ponto.y >= retangulo.ponto1.y && ponto.y <= retangulo.ponto2.y)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

// função que padroniza o ponto1 para ser menor que o ponto2.
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
    int numero, i, j, retorno;

    // abrindo o arquivo.
    FILE *arq = fopen("input.txt", "r");

    // pegando o quantidade de retangulos e pontos do arquivo.
    fscanf(arq, "%d", &numero);

    // alocação dinâmica para os vetores de point e rect
    point *ponto = (point *)malloc(numero * sizeof(point));
    rect *retangulo = (rect *)malloc(numero * sizeof(rect));

    // lendo os pontos do arquivo e salvando no vetor de pontos.
    for (i = 0; i < numero; i++)
    {
        fscanf(arq, "%d %d", &ponto[i].x, &ponto[i].y);
    }

    // lendo os pontos do retângulo (p1 e p2) do arquivo e salvando no vetor de retangulos.
    for (i = 0; i < numero; i++)
    {
        fscanf(arq, "%d %d %d %d", &retangulo[i].ponto1.x, &retangulo[i].ponto1.y, &retangulo[i].ponto2.x, &retangulo[i].ponto2.y);
        retangulo[i].num_of_rect = numero;
    }

    // usando a função para padronizar os pontos.
    padroniza_ponto(retangulo);

    // verificando se determinado ponto está em determinado retângulo e mostrando isso.
    for (i = 0; i < numero; i++)
    {
        for (j = 0; j < numero; j++)
        {
            retorno = pt_in_rect(ponto[j], retangulo[i]);
            if (retorno == 1)
            {
                printf("O retangulo %d contem: %d\n", i, j);
            }
        }
    }

    // liberando a memória e fechando o arquivo.
    free(ponto);
    free(retangulo);
    fclose(arq);

    return 0;
}
