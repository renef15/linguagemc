#include<stdio.h>

int main(){
/*
    int v[100] = {0};
    int i;
    for(i = 0; i < 100; i++){
        printf("%d\n", v[i]);
    }
    printf("========= %p\n", v);
    */

   int a = 10;
   int *pa = &a;

    printf("%d", *pa);
    *pa = 20;
    printf("a = %d", a);



    return 0;
}