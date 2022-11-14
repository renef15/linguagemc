#include <stdio.h>
#define sqr(x) ++x * ++x
int main()
{
    int a = 3, z;
    printf("\n%d",a);
    z = ++a * ++a;
    printf("\n%d",a);
    a -= 3;
    printf("\n%d",a);
    printf("%d %d", sqr(a), z);
    return 0;
}