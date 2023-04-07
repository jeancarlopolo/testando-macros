#include "forma.h"
#include "stdio.h"

int main()
{
    Circulo c = criaCirculo(1, 2, 3, 4, 5, "red", "blue");
    printf("x: %f y: %f r: %f corb: %s corp: %s id: %f rotacao: %f \n", getCirculoX(c), getCirculoY(c), getCirculoR(c), getCirculoCorb(c), getCirculoCorp(c), getCirculoId(c), getCirculoRotacao(c));
    setCirculoX(c, 6);
    setCirculoY(c, 7);
    setCirculoR(c, 8);
    setCirculoCorb(c, "green");
    setCirculoCorp(c, "yellow");
    setCirculoId(c, 9);
    setCirculoRotacao(c, 10);
    printf("x: %f y: %f r: %f corb: %s corp: %s id: %f rotacao: %f \n", getCirculoX(c), getCirculoY(c), getCirculoR(c), getCirculoCorb(c), getCirculoCorp(c), getCirculoId(c), getCirculoRotacao(c));
    return 0;
}