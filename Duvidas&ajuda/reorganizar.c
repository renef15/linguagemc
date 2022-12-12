#include <stdio.h>

// Organizando o vetor do menor para o maior
int vetmenor(int *array, int tamanho)
{
    int i, j, aux;

    aux = 0;

    for (i = 0; i < tamanho; i++)
    {
        for (j = 0; j < tamanho; j++)
        {
            if (!(array[i] > array[j]))
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
}

// Organizando o vetor do maior para o menor
int vetmaior(int *array, int tamanho)
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

// Função que copia os elementos de um vetor para outo
int vetcopy(int *array1, int *array2, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        array2[i] = array1[i];
    }
}

// Função que mostra um vetor
int vetmostrar(int *array, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("%d\t", array[i]);
    }
}

int main()
{ // Variáveis
    int tamanho_vetor, i, j;

    // Recebendo o tamanho do vetor
    printf("Digite o tamanho do vetor1: ");
    scanf("%d", &tamanho_vetor);

    // Criando os vetores
    int *vetor1 = (int *)malloc(tamanho_vetor * sizeof(int));
    int *vetor2 = (int *)malloc(tamanho_vetor * sizeof(int));
    int *vetor3 = (int *)malloc(tamanho_vetor * sizeof(int));

    // Pegando os elementos do vetor
    for (i = 0; i < tamanho_vetor; i++)
    {
        printf("Digite o elemento %d do vetor1: ", i);
        scanf("%d", &vetor1[i]);
    }

    vetmenor(vetor1, tamanho_vetor);
    vetcopy(vetor1, vetor2, tamanho_vetor);
    vetmaior(vetor2, tamanho_vetor);

    // Organizando o vetor como a questão pediu
    for (i = 0, j = 0; j < tamanho_vetor; i++, j += 2)
    {
        vetor3[j] = vetor1[i];
        vetor3[j + 1] = vetor2[i];
    }

    vetcopy(vetor3, vetor1, tamanho_vetor);
    // Mostrando o vetor
    vetmostrar(vetor3, tamanho_vetor);
}