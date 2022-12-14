#include <stdio.h>
#define tamanho_matriz 6

// Função que mostra um vetor
int vetmostrar(int *array, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("A camera %d foi esolhida.\n", array[i]);
    }
}
// Função que copia os elementos de um vetor para outo
int vetcopy(int *array1, int *array2, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        array2[i] = array1[i];
    }
}
// Organizando o vetor do maior para o menor
int decrescente(int *array, int tamanho)
{
    int i, j, aux;

    aux = 0;

    for (i = 0; i < tamanho; i++)
    {
        for (j = 0; j < tamanho; j++)
        {
            if ((array[i] > array[j]))
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
}

int camera(int mat[][tamanho_matriz], int tamanho)
{
    int linha, coluna, contador, escolhida;

    contador = 0;
    int soma[tamanho];
    int aux_soma[tamanho];

    for (linha = 0; linha < tamanho; linha++)
    {
        for (coluna = 0; coluna < tamanho; coluna++)
        {
            if (mat[linha][coluna] == 1)
            {
                contador++;
            }
        }
        soma[linha] = contador;
        contador = 0;
    }

    vetcopy(soma, aux_soma, tamanho);
    decrescente(aux_soma, tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        if (aux_soma[0] == soma[i])
        {
            escolhida = i;
        }
    }
    return escolhida;
}

int main()
{
    int retorno, parada, i, j;

    int cameras[tamanho_matriz];
    int matriz[tamanho_matriz][tamanho_matriz] =
        {{0, 1, 0, 0, 0, 0},
         {1, 0, 1, 0, 0, 0},
         {0, 1, 0, 1, 1, 1},
         {0, 0, 1, 0, 0, 0},
         {0, 0, 1, 0, 0, 0},
         {0, 0, 1, 0, 0, 0}};

    for (i = 0; i < tamanho_matriz; i++)
    {
        if(cameras[i] == 0){
            
        }
    }
    vetmostrar(cameras, tamanho_matriz);
}