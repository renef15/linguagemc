#include <stdio.h>

int mostrar(int *vetor, int recursao, int x)
{
    int n = 0, retorno = 0, m;

    if (recursao == 1)
    {

        for (m = 0; m < 6; m++)
        {
            if (n < vetor[m])
            {
                n = vetor[m];
                retorno = m;
            }
        }
        printf("\nPosicao: camera na posicao  %d e camera na posicao %d sao as ideais.", retorno, mostrar(vetor, 0, x));
        return retorno;
    }
    else
    {

        return x;
    }

    return retorno;
}

int main()
{

    int sum = 0;
    int i;
    int j;
    int auxiliar;
    int contador = 0;
    int calculinha[5];

    int mat[6][6] = {{0, 1, 0, 0, 0, 0},
                     {1, 0, 1, 0, 0, 0},
                     {0, 1, 0, 1, 1, 1},
                     {0, 0, 1, 0, 0, 0},
                     {0, 0, 1, 0, 0, 0},
                     {0, 0, 1, 0, 0, 0}};

    int preenchido[6] = {0, 0, 0, 0, 0, 0};
    int preenchido2[6] = {0, 0, 0, 0, 0, 0};

    for (i = 0; i < 6; i++)
    {
        sum = 0;
        for (j = 0; j < 6; j++)
        {

            sum += mat[i][j];
        }
        calculinha[i] = sum;
    }
    for (i = 0; i < 6; i++)
    {
        if (calculinha[i] < calculinha[i + 1] && i != 5)
        {
            auxiliar = i + 1;
        }
    }

    for (i = 0; i < 6; i++)
    {
        preenchido[i] = mat[auxiliar][i];
    }

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {

            if (preenchido[j] == 0 && preenchido[j] != mat[i][j] && i != auxiliar)
            {
                preenchido2[i]++;
            }
        }
    }

    mostrar(preenchido2, 1, auxiliar);
}