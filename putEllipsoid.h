#ifndef PUTELLIPSOID_H_INCLUDED
#define PUTELLIPSOID_H_INCLUDED
#include "figurageometrica.h"
#include "sculptor.h"

class putEllipsoid : public FiguraGeometrica{
    int x0, y0, z0, rx, ry, rz;
public:
    putEllipsoid(int x0, int y0, int z0, int rx, int ry, int rz, float r, float g, float b, float a);
    ~putEllipsoid(){}
    void draw(Sculptor &t);
};

#endif // PUTELLIPSOID_H_INCLUDED
