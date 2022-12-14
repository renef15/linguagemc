#include <stdio.h>
#include <stdlib.h>

int vetmostrar(int *array, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("%d\t", array[i]);
    }
}

int crescente(int *array, int tamanho)
{
    int i, j, aux;

    aux = 0;

    for (i = 0; i < tamanho; i++)
    {
        for (j = 0; j < tamanho; j++)
        {
            if (array[i] < array[j])
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
}

int main()
{
    int tamanho, i, j, retorno;
    tamanho = 0;

    printf("Digite o tamanho do vetor:");
    scanf("%d", &tamanho);

    int *vetor = (int *)malloc(tamanho * sizeof(int));

    for (i = 0; i < tamanho; i++)
    {
        printf("Digite o elemento %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    crescente(vetor, tamanho);

    for (i = 0, j = 1; i < tamanho; i++, j++)
    {
        if (vetor[i] + 1 != vetor[j])
        {
            retorno = vetor[i] + 1;
            printf("O elemento que falta eh %d.\n", retorno);
        }
    }
}