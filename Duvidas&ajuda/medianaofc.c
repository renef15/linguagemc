#include <stdio.h>
#include <stdlib.h>

// Escreva um programa em C para encontrar a mediana de dois vetores ordenados de mesmo tamanho

int vetmenor(int *array, int tamanho)
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

float mediana(int *vetor, int tamanho)
{
    float retorno;
    if (tamanho % 2 == 0)
    {
        tamanho -= 1;
        printf("%d\n", vetor[tamanho / 2]);
        printf("%d\n", vetor[(tamanho / 2) + 1]);
        retorno = (vetor[tamanho / 2] + vetor[(tamanho / 2) + 1]) / 2;
        if ((((vetor[tamanho / 2]) % 2 == 0) && ((vetor[(tamanho / 2) + 1]) % 2 == 1)) || (((vetor[tamanho / 2]) % 2 == 1) && ((vetor[(tamanho / 2) + 1]) % 2 == 0)))
        {
            retorno += 0.5;
        }
    }
    else
    {
        retorno = vetor[(tamanho / 2)];
    }

    return retorno;
}

int main()
{
    int tamanho_vetor, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho_vetor);

    int *vetor1 = (int *)malloc(tamanho_vetor * sizeof(int));
    int *vetor2 = (int *)malloc(tamanho_vetor * sizeof(int));

    for (i = 0; i < tamanho_vetor; i++)
    {
        printf("Digite o elemento %d do vetor vetor1: ", i);
        scanf("%d", &vetor1[i]);
    }

    /*for (i = 0; i < tamanho_vetor; i++)
    {
        printf("Digite o elemento %d do vetor vetor2: ", i);
        scanf("%d", &vetor2[i]);
    }*/

    vetmenor(vetor1, tamanho_vetor);
    // vetmenor(vetor2, tamanho_vetor);

    printf("A mediana do vetor1 eh igual a %.1f\n", mediana(vetor1, tamanho_vetor));
    // printf("A mediana do vetor2 eh igual a %d.", mediana(vetor2, tamanho_vetor));
}
