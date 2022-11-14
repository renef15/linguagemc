#include <stdio.h>
#define sqr(x) ++x * ++x

int main(){
    int a = 3 , z ;
    z = ++a * ++a;
    a -= 3;
    printf("%d %d", sqr(a) , z);
    return 0;
}