#include <stdio.h>
#include <math.h>

int fatorial(int x)
{
    if (x == 0)
        return 1;
    else
        return x * fatorial(x - 1);
}

int somatorio(int x)
{
    printf("%d\t", x);
    if (x == 0)
        return 0;
    else
        return x = x + somatorio(x - 1);
}

int soma_de_cubos(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n = soma_de_cubos(n - 1) + pow(n, 3);
    }
}

int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2 || n == 3)
    {
        return 1;
    }
    else
    {
        return n = fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int potencia(int k , int n){

}

int main(void)
{
    int num = 0;

    printf("Digite um numero : ");
    scanf("%d", &num);

    // printf("\nSeu fatorial eh igual a %d.\n", fatorial(num));

    // printf("\nO somatorio dos naturais ate o numero %d eh %d.\n", num, somatorio(num));

     printf("\nA soma dos %d primeiros cubos eh %d.\n", num, soma_de_cubos(num));

    printf("\n%d eh o %d termo da sequencia de fibonacci.\t", fibonacci(num), num);

    return 0;
}
