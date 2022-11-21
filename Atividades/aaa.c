#include <stdio.h>
#include <string.h>

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
    char str1[100] = "Linguagem";
    char *str2 = "Programacao";
     myStracat(&str1, str2);
    printf("%s", str1);
    return 0;
}
