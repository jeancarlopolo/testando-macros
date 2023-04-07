#include "forma.h"

struct circStruct
{
    double x;
    double y;
    double r;
    double id;
    double rotacao;
    char *corb;
    char *corp;
};

struct retStruct
{
    double x;
    double y;
    double w;
    double h;
    double id;
    double rotacao;
    char *corb;
    char *corp;
};

struct linStruct
{
    double x;
    double y;
    double x2;
    double y2;
    double id;
    double rotacao;
    char *corb;
    char *corp;
};

struct txtStruct
{
    double x;
    double y;
    char *conteudo;
    double id;
    double rotacao;
    char *corb;
    char *corp;
};

#define _FORMA_DECLARAR_IMPLEMENTACAO(tipo, nomestruct) \
    double get##tipo##X(tipo f)                        \
    {                                                  \
        return ((struct nomestruct *)f)->x;            \
    }                                                  \
    double get##tipo##Y(tipo f)                        \
    {                                                  \
        return ((struct nomestruct *)f)->y;            \
    }                                                  \
    double get##tipo##Id(tipo f)                       \
    {                                                  \
        return ((struct nomestruct *)f)->id;           \
    }                                                  \
    double get##tipo##Rotacao(tipo f)                  \
    {                                                  \
        return ((struct nomestruct *)f)->rotacao;      \
    }                                                  \
    char *get##tipo##Corb(tipo f)                      \
    {                                                  \
        return ((struct nomestruct *)f)->corb;         \
    }                                                  \
    char *get##tipo##Corp(tipo f)                      \
    {                                                  \
        return ((struct nomestruct *)f)->corp;         \
    }                                                  \
    void set##tipo##X(tipo f, double x)                \
    {                                                  \
        ((struct nomestruct *)f)->x = x;               \
    }                                                  \
    void set##tipo##Y(tipo f, double y)                \
    {                                                  \
        ((struct nomestruct *)f)->y = y;               \
    }                                                  \
    void set##tipo##Id(tipo f, double id)              \
    {                                                  \
        ((struct nomestruct *)f)->id = id;             \
    }                                                  \
    void set##tipo##Rotacao(tipo f, double rotacao)    \
    {                                                  \
        ((struct nomestruct *)f)->rotacao = rotacao;   \
    }                                                  \
    void set##tipo##Corb(tipo f, char *corb)           \
    {                                                  \
        ((struct nomestruct *)f)->corb = corb;         \
    }                                                  \
    void set##tipo##Corp(tipo f, char *corp)           \
    {                                                  \
        ((struct nomestruct *)f)->corp = corp;         \
    }

_FORMA_DECLARAR_IMPLEMENTACAO(Circulo, circStruct)
Circulo criaCirculo(double x, double y, double r, double id, double rotacao, char *corb, char *corp)
{
    Circulo f = (Circulo)malloc(sizeof(struct circStruct));
    setCirculoX(f, x);
    setCirculoY(f, y);
    setCirculoR(f, r);
    setCirculoId(f, id);
    setCirculoRotacao(f, rotacao);
    setCirculoCorb(f, corb);
    setCirculoCorp(f, corp);
    return f;
}
double getCirculoR(Circulo f)
{
    return ((struct circStruct *)f)->r;
}
void setCirculoR(Circulo f, double r)
{
    ((struct circStruct *)f)->r = r;
}

_FORMA_DECLARAR_IMPLEMENTACAO(Retangulo, retStruct)
Retangulo criaRetangulo(double x, double y, double w, double h, double id, double rotacao, char *corb, char *corp)
{
    Retangulo f = (Retangulo)malloc(sizeof(struct retStruct));
    setRetanguloX(f, x);
    setRetanguloY(f, y);
    setRetanguloW(f, w);
    setRetanguloH(f, h);
    setRetanguloId(f, id);
    setRetanguloRotacao(f, rotacao);
    setRetanguloCorb(f, corb);
    setRetanguloCorp(f, corp);
    return f;
}
double getRetanguloW(Retangulo f)
{
    return ((struct retStruct *)f)->w;
}
double getRetanguloH(Retangulo f)
{
    return ((struct retStruct *)f)->h;
}
void setRetanguloW(Retangulo f, double w)
{
    ((struct retStruct *)f)->w = w;
}
void setRetanguloH(Retangulo f, double h)
{
    ((struct retStruct *)f)->h = h;
}

_FORMA_DECLARAR_IMPLEMENTACAO(Linha, linStruct)
Linha criaLinha(double x, double y, double x2, double y2, double id, double rotacao, char *corb, char *corp)
{
    Linha f = (Linha)malloc(sizeof(struct linStruct));
    setLinhaX(f, x);
    setLinhaY(f, y);
    setLinhaX2(f, x2);
    setLinhaY2(f, y2);
    setLinhaId(f, id);
    setLinhaRotacao(f, rotacao);
    setLinhaCorb(f, corb);
    setLinhaCorp(f, corp);
    return f;
}
double getLinhaX2(Linha f)
{
    return ((struct linStruct *)f)->x2;
}
double getLinhaY2(Linha f)
{
    return ((struct linStruct *)f)->y2;
}
void setLinhaX2(Linha f, double x2)
{
    ((struct linStruct *)f)->x2 = x2;
}
void setLinhaY2(Linha f, double y2)
{
    ((struct linStruct *)f)->y2 = y2;
}

_FORMA_DECLARAR_IMPLEMENTACAO(Texto, txtStruct)
Texto criaTexto(double x, double y, char *conteudo, double id, double rotacao, char *corb, char *corp)
{
    Texto f = (Texto)malloc(sizeof(struct txtStruct));
    setTextoX(f, x);
    setTextoY(f, y);
    setTextoConteudo(f, conteudo);
    setTextoId(f, id);
    setTextoRotacao(f, rotacao);
    setTextoCorb(f, corb);
    setTextoCorp(f, corp);
    return f;
}
char *getTextoConteudo(Texto f)
{
    return ((struct txtStruct *)f)->conteudo;
}
void setTextoConteudo(Texto f, char *conteudo)
{
    ((struct txtStruct *)f)->conteudo = conteudo;
}
