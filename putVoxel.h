#ifndef PUTVOXEL_H_INCLUDED
#define PUTVOXEL_H_INCLUDED
#include "figurageometrica.h"
#include "sculptor.h"

class putVoxel : public FiguraGeometrica{
    int x0, y0, z0;
public:
    putVoxel(int x0, int y0, int z0, float r, float g, float b, float a);
    ~putVoxel(){}
    void draw(Sculptor &t);
};


#endif // PUTVOXEL_H_INCLUDED
