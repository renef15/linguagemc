#include <stdio.h>

int main()
{

    FILE *arq = fopen("input.txt", "r");

    if (arq == NULL)
    {
        printf("ERRO AO ABRIR ARQUIVO");
        exit(1);
    }

    //int *numeros = malloc(5 * sizeof(int));
    int numeros[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        fscanf(arq, "%d", &numeros[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", numeros[i]);
    }

    fclose(arq);

    return 0;
}