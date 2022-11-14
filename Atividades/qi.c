#include <stdio.h>

    int func(int x){
        if( x ==0)
            return 0;
        return ((x%10)+(x/10));
    }

int main(){
    int x = 0 ;
    int y = 0 ;
    printf("Digite um valor inteiro para x : ");
    scanf("%d", &x);
    y = func(x);
    printf("%d", y);

}
   