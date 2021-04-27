#ifndef PUTSPHERE_H_INCLUDED
#define PUTSPHERE_H_INCLUDED
#include "figurageometrica.h"
#include "sculptor.h"

class putSphere : public FiguraGeometrica{
    int x0, y0, z0, rr;
public:
    putSphere(int x0, int y0, int z0, int rr, float r, float g, float b, float a);
    ~putSphere(){}
    void draw(Sculptor &t);
};

#endif // PUTSPHERE_H_INCLUDED
