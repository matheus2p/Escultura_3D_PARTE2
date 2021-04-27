#ifndef CUTELLIPSOID_H_INCLUDED
#define CUTELLIPSOID_H_INCLUDED
#include "figurageometrica.h"
#include "sculptor.h"

class cutEllipsoid : public FiguraGeometrica{
    int x0, y0, z0, rx, ry, rz;
public:
    cutEllipsoid(int x0, int y0, int z0, int rx, int ry, int rz);
    ~cutEllipsoid(){}
    void draw(Sculptor &t);
};

#endif // CUTELLIPSOID_H_INCLUDED
