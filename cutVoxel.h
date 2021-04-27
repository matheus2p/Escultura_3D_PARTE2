#ifndef CUTVOXEL_H_INCLUDED
#define CUTVOXEL_H_INCLUDED
#include "figurageometrica.h"
#include "sculptor.h"

class cutVoxel : public FiguraGeometrica{
    int x0, y0, z0;
public:
    cutVoxel(int x0, int y0, int z0);
    ~cutVoxel(){}
    void draw(Sculptor &t);
};

#endif // CUTVOXEL_H_INCLUDED
