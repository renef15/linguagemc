
#include <stdio.h>

int main()
{
    /*int x;
    float y;
    int a, b, c, d;
    float num;
    float quinto;
    printf("Digite um numero inteiro e um decimal: ");
    scanf("%d %f", &x, &y);
    printf("%d %0.2f", x, y);
    printf("\nDigite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    d = a + b + c;
    printf("\nA soma d tres numeros eh %d", d);
    printf("\nDigite um numero para saber seu quadrado: ");
    scanf("%f", &num);
    printf("%0.2f", num * num);
    printf("\nDigite um numero para saber sua quinta parte: ");
    scanf("%f", &quinto);
    printf("%0.2f", quinto / 5);
    */

    float fah = 0;
    float cel = 0;
    float kel = 0;
    float kel_cel = 0;
    float cel_kel = 0;

    printf("Digite a temperatura em celsius: ");
    scanf("%f", &cel);

    fah = (cel * 1.8 + 32);
    printf("A temperatura em fahrenheit eh %0.2f\n", fah);

    cel = 5 * (fah - 32) / 9;
    printf("A temperatura em celsius eh %0.2f", cel);

    printf("Digite a temperatura em kelvin: ");
    scanf("%f", &kel);
    kel_cel = kel -273.15;
    printf("%f",kel_cel);

    cel_kel = kel_cel + 273.15;
    printf("A temperatura em celsius eh %f", cel_kel);
    
}
