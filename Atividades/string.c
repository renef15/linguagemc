#include <stdio.h>

int main(){
    char str [100];
    int i =0, cont =0;
    printf("Entre com string:\n");
    scanf("%s",str);
    //percorrer string
    for(i =0; str[i]!='\0';i++){
        cont++;
    }
    printf("A string %s possui %d caracteres",str,cont);
    return 0 ;
    
}