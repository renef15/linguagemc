#include <stdio.h>

enum semana
{Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};

int main()
{
    enum semana s;
    s = Segunda;
    printf("Valor = %d\n", s);

    enum semana s1, s2, s3;
    s1 = Segunda;//1
    s2 = Terca;//2
    s3 = s1 + s2;// 1 + 2
    printf("Domingo = %d\n",Domingo);//0
    printf("s1 = %d\n",s1);
    printf("s1 = %d\n",s2);
    printf("s1 = %d\n",s3);

    if (s3 == Quarta){
        printf("s3 igual a Quarta\n");
    }

}