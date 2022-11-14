#include <stdio.h>
#define mod(x)  ((x<0)? -x: x)
#include "bibliotecas.c"
int quadrado(int x){
    return x*x;
}
int main(){
    int x=-3;
    printf("%d", quadrado(5));

    return 0;
}