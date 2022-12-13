#include <stdio.h>
#include <stdlib.h>

int mostrarvet(int *array, int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf("%d\t", array[i]);
    }
}

int main()
{
    int tamanho_vetor, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho_vetor);

    int *minuendo = (int *)malloc(tamanho_vetor * sizeof(int));
    int *subtraendo = (int *)malloc(tamanho_vetor * sizeof(int));
    int *diferenca = (int *)malloc(tamanho_vetor * sizeof(int));

    for (i = 0; i < tamanho_vetor; i++)
    {
        printf("Digite o elemento %d do vetor minuendo: ", i);
        scanf("%d", &minuendo[i]);
    }

    for (i = 0; i < tamanho_vetor; i++)
    {
        printf("Digite o elemento %d do vetor subtraendo: ", i);
        scanf("%d", &subtraendo[i]);
    }

    for (i = 0; i < tamanho_vetor; i++)
    {
        diferenca[i] = minuendo[i] - subtraendo[i];
    }
    mostrarvet(diferenca, tamanho_vetor);
}