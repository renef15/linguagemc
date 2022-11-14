#include <stdio.h>

int vetor()
{
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    for (int i = 0; i < n; i++)

    {
        printf("Digite um valor para o vetor: ");
        scanf("%d", &vetor[i]);
    }
    for (int j; j < 5; j++)
    {
        printf("%d\t", vetor[j]);
    }
}

int matriz()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int mat[m][n];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Digite mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\t%d", mat[i][j]);
        }
        printf("\n");
    }
}

int somaemedia()
{
    int soma = 0;
    int i;
    int vetor[5] = {1, 2, 3, 4, 5};
    for (i = 0; i < 5; i++)
    {
        soma = soma + vetor[i];
    }
    printf("Soma = %d\n", soma);
    printf("Media  = %d", soma / (sizeof(vetor) / sizeof(int)));
}

int invertvetor()
{
    int i = 0;
    int vetor[5] = {0, 1, 2, 3, 4};

    int tamanho = sizeof(vetor) / sizeof(vetor[1]);

    for (i = tamanho - 1; i >= 0; i--)
    {
        printf("\t%d", vetor[i]);
    }
}
int main(){
    printf("Hello world! ");
}