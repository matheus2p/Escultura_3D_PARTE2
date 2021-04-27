#ifndef CUTSPHERE_H_INCLUDED
#define CUTSPHERE_H_INCLUDED
#include "figurageometrica.h"
#include "sculptor.h"

class cutSphere : public FiguraGeometrica{
    int x0, y0, z0, rr;
public:
    cutSphere(int x0, int y0, int z0, int rr);
    ~cutSphere(){}
    void draw(Sculptor &t);
};

#endif // CUTSPHERE_H_INCLUDED
