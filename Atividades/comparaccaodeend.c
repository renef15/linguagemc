#include <stdio.h>

int main()
{
    int x, y;
    int *ptrx;
    int *ptry;
    ptrx = &x;
    ptry = &y;
    x = 15;
    y = 30;
    printf("ptrx = %d e ptry = %d\n", ptrx, ptry);
    if (ptrx > ptry)
    {
        printf("Valor guardado por ptrx: %d\n", ptrx);
        printf("O valor contido no endereco para qual o ptrx aponta eh : %d\n", *ptrx);
    }
    else
    {
        printf(" valor guardado por ptry: %d\n", ptry);
        printf("O valor contido no endereco para qual o ptry aponta eh : %d\n", *ptry);
    }
}