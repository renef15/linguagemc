#include <stdio.h>

int eh_par(x)
{
    x % 2 == 0 ? printf("eh par") : printf("nao eh par");
}

int fatorial(int numero)
{
    int fatorial = 1;
    for (int i = 1; i <= numero; i++)
    {
        fatorial = fatorial * i;
    }
    return fatorial;
}
int main()
{
    int num = 0;

    printf("Digite o um inteiro para saber seu fatorial: ");
    scanf("%d", &num);

    printf("%d", fatorial(num));
    /*
    static float soma = 0.0;
    float n = 5;

    for (float i = 1; i <= n; i++)
    {
        soma = soma + (1 / i);

        if (i < n)
        {
            printf("1/%0.0f + ", i);
        }
        else if (i == n)
        {
            printf("1/%0.0f", i);
        }
    }
    printf("\n\n%0.3f", soma);
    */
}
