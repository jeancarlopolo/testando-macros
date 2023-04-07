#ifndef FORMA_H
#define FORMA_H

#include <stdlib.h>

typedef void *Circulo;
typedef void *Retangulo;
typedef void *Linha;
typedef void *Texto;

#define _FORMA_DECLARAR(tipo)                            \
    double get##tipo##X(tipo f);                     \
    double get##tipo##Y(tipo f);                     \
    double get##tipo##Id(tipo f);                    \
    double get##tipo##Rotacao(tipo f);               \
    char *get##tipo##Corb(tipo f);                   \
    char *get##tipo##Corp(tipo f);                   \
    void set##tipo##X(tipo f, double x);             \
    void set##tipo##Y(tipo f, double y);             \
    void set##tipo##Id(tipo f, double id);           \
    void set##tipo##Rotacao(tipo f, double rotacao); \
    void set##tipo##Corb(tipo f, char *corb);        \
    void set##tipo##Corp(tipo f, char *corp);

_FORMA_DECLARAR(Circulo)
Circulo criaCirculo(double x, double y, double r, double id, double rotacao, char *corb, char *corp);
double getCirculoR(Circulo f);
void setCirculoR(Circulo f, double r);

_FORMA_DECLARAR(Retangulo)
Retangulo criaRetangulo(double x, double y, double w, double h, double id, double rotacao, char *corb, char *corp);
double getRetanguloW(Retangulo f);
double getRetanguloH(Retangulo f);
void setRetanguloW(Retangulo f, double w);
void setRetanguloH(Retangulo f, double h);

_FORMA_DECLARAR(Linha)
Linha criaLinha(double x, double y, double x2, double y2, double id, double rotacao, char *corb, char *corp);
double getLinhaX2(Linha f);
double getLinhaY2(Linha f);
void setLinhaX2(Linha f, double x2);
void setLinhaY2(Linha f, double y2);

_FORMA_DECLARAR(Texto)
Texto criaTexto(double x, double y, char *conteudo, double id, double rotacao, char *corb, char *corp);
char *getTextoConteudo(Texto f);
void setTextoConteudo(Texto f, char *conteudo);

#endif