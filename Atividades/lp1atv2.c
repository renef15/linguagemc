#include <stdio.h>
#include <string.h>
#define R 10
#define C 20

/*int main()
{
    int(*p)[R][C];
    printf("%d", sizeof(*p));
    getchar();

    return 0;
}*/
/*
int main()
{
    int arri[] = {1, 2, 3};
    int *ptri = arri;

    char arrc[] = {1, 2, 3};
    char *ptrc = arrc;

    printf("sizeof arri[]= %d\n", sizeof(arri));

    printf("sizeof ptri = %d\n", sizeof(ptri));

    printf("sizeof arrc[]= %d\n", sizeof(arrc));

    printf("sizeof ptrc[]= %d", sizeof(ptrc));

    return 0;
}


*/

void myStracat(char *a, char *b)
{
    int m = strlen(a);
    int n = strlen(b);
    int i;
    for (i = 0; i <= n; i++)
    {
        a[m + i] = b[i];
    }
}

int main()
{
    char *str1 = "Linguagem";
    char *str2 = "Programacao";
    myStrcat(str1, str2);
    printf("%s", str1);
    return 0;
}

