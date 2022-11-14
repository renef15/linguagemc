#include <stdio.h>

int fun1()
{
    int i, cont;
    for (i = 0, cont = 0; cont <= 2; i++)
    {
        if (i == 0)
            continue;
        if (i % 3 == 0)
        {
            printf("%d\n", i);
            cont++;
        }
    }
    printf("Fim");
}

int func2()
{
    int i = 0;
    int cont = 0;
    while (cont < 3)
    {
        i++;
        if (i % 3 == 0)
        {
            printf("%d\n", i);
            cont++;
        }
    }
    printf("Fim");
}



int fun3()
{
    int k = 0;
    char tres;
    printf("Digite um numero: ");
    scanf("%d", &k);
    tres = (k %3 == 0) ? printf("Eh multiplo de tres"):printf("nao eh multiplo de tres ");
    printf("%c",tres);
}

int func4(){
    for (int i = 0; i<101; i++){
        if (i%2 == 0)
            continue;
        printf("%d\n",i);
    }
}

int func5()
{
    int i = 0;
    while (i<100)
    {
        i++;
        printf("%d\n",i);
    }

}
int func6()
{
    int a;
    printf("Digite o valor de A : ");
    scanf("%d", &a);
    do
    {
        printf("%d\n", a);
        a++;
    } while (a < 100);
    {
        printf("Fim");
    }
}

int func7()
{
    int soma = 0;
    int numero = 0;
    for (int i = 0; i < 2; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma += numero;
    }
    printf("A soma eh %d", soma);
}

int main()
{
    int soma = 0;
    int numero = 0;
    int i =0;
    while(i < 5){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if (numero <0){
            continue;
        }
        soma += numero;
        i++;
    }
    
    printf("A soma eh %d\n", soma);
    printf("A media eh %d", soma/i);
}