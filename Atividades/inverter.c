#include <stdio.h>

void inverter1()
{
    int x, y;
    printf("Digite um numero: ");
    scanf("%d", &x);
    y = x % 10;
    x = x / 10;
    printf("esse numero invertido eh %d%d", y, x);
}

#include <stdio.h>

int inverter2(int x)

{
    int y;
    do
    {
        y = x % 10;
        x = x / 10;
        printf("%d", y);
    } while (x != 0);
}

int main()
{

    int aaa, s;
    printf("insira um numero: ");
    scanf("%d", &aaa);

    inverter2(aaa);

    return 0;
}