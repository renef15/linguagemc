#include <stdio.h>
#define e_maiuscula(x) (x > 64 && x < 91) ? printf("eh maiuscula ") : printf("n eh maiuscula ")
#define minuscula(x) (x > 64 && x < 91) ? x + 32 : x

int main()
{
    char a;
    int num;
    float num2;

    printf("Digite uma letra: ");
    scanf("%c", &a);
    printf("%c\n", e_maiuscula(a));
    printf("%c", minuscula(a));
    printf("\nDigite um numero: ");
    scanf("%d %f", &num, &num2);
    printf("%d\n %f", num, num2);

    return 0;
}
