#ifndef FIGURAGEOMETRICA_H_INCLUDED
#define FIGURAGEOMETRICA_H_INCLUDED
#include "sculptor.h"

class FiguraGeometrica{
protected:
    float r,g,b,a;
public:
    FiguraGeometrica();
    virtual ~FiguraGeometrica(){}
    virtual void draw(Sculptor &t)=0;
};

#endif // FIGURAGEOMETRICA_H_INCLUDED
