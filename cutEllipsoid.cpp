#include <iostream>
#include "figurageometrica.h"
#include "cutEllipsoid.h"

cutEllipsoid::cutEllipsoid(int x0, int y0, int z0, int rx, int ry, int rz){
     this->x0 = x0; this->y0 = y0; this->z0 = z0; this->rx = rx; this->ry = ry; this->rz = rz;
}
void cutEllipsoid::draw(Sculptor &t){
     int i, j, k;
     double r1, r2, r3;
      for(i = x0-rx; i < x0+rx; i++){
       for(j = y0-ry; j < y0+ry; j++){
        for(k = z0-rz; k < z0+rz; k++){
          r1 = ((double)(i-x0)*(double)(i-x0))/(rx*rx);
          r2 = ((double)(j-y0)*(double)(j-y0))/(ry*ry);
          r3 = ((double)(k-z0)*(double)(k-z0))/(rz*rz);
         if(r1 + r2 + r3 < 1){
            t.cutVoxel(i,j,k);
         }
        }
       }
      }
}
