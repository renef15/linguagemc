#include <stdio.h>

int main(void)
{
    int *vetor, tamanho, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = malloc(tamanho * sizeof(int));

    for (i = 0; i < tamanho; i++)
    {
        printf("\nvetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < tamanho; i++)
    {
        printf("%d\t", vetor[i]);
    }
    free(vetor);

    /*
    int x;
    printf("Digite o tamanho do vetor");
    printf("Digite os elemenstos do array: ");

    scanf("%d", &x);
    int *tamanho_vetor = malloc(x * sizeof(int));
*/ /*

     int *vetor, tamanho, i;
     printf("\nTamanho do vetor? ");
     scanf("%d", &tamanho);
     vetor = malloc(tamanho * sizeof(int));
     if (vetor == NULL)
         return -1;

     for (i = 0; i < tamanho; i++)
     {
         printf("\n%do. Valor? ", i);
         scanf("%d", &vetor[i]);
     }
     for (i = 0; i < tamanho; i++)
         printf("%d ", vetor[i]);
     free(vetor); // libera memória alocada para v
     return 0;
     */
}
