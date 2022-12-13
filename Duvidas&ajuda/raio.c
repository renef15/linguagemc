#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct raio
{
    int x;
    int y;
} Ponto;

int distancia(Ponto p1, Ponto p2)
{
    int distancia;
    distancia = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    return distancia;
}

int circulo(Ponto pa, Ponto pb, int raio)
{
    if (distancia(pa, pb) < raio)
    {
        return 1;
    }
    else if (distancia(pa, pb) == raio)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int retorno, raio;
    Ponto centro;
    Ponto point;

    printf("Digite as coordenadas do centro da circulo: ");
    scanf("%d %d", &centro.x, &centro.y);

    printf("Digite o raio da circunferencia: ");
    scanf("%d", &raio);

    printf("Digite as coordenadas do ponto que pode estar dentro da circulo: ");
    scanf("%d %d", &point.x, &point.y);

    retorno = circulo(centro, point, raio);

    if (retorno == 1)
    {
        printf("O ponto esta no circulo.");
    }
    else if (retorno == -1)
    {
        printf("O ponto esta em cima da circulo.");
    }
    else
    {
        printf("O ponto esta fora da circulo.");
    }
}