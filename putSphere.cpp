#include <iostream>
#include "figurageometrica.h"
#include "putSphere.h"

putSphere::putSphere(int x0, int y0, int z0, int rr,
                     float r, float g, float b, float a){
    this->x0 = x0; this->y0 = y0; this->z0 = z0; this-> rr = rr;
    this->r = r; this->g =  g; this->b = b; this->a = a;
}
void putSphere::draw(Sculptor &t){
    int i, j, k;
     double r1, r2, r3;
     double raio;
     raio = (double)rr*(double)rr;
     t.setColor(r,g,b,a);
      for(i = x0-rr; i < x0+rr; i++){
       for(j = y0-rr; j < y0+rr; j++){
        for(k = z0-rr; k < z0+rr; k++){
          r1 = ((double)(i-x0)*(double)(i-x0));
          r2 = ((double)(j-y0)*(double)(j-y0));
          r3 = ((double)(k-z0)*(double)(k-z0));
         if(r1 + r2 + r3 < raio){
            t.putVoxel(i,j,k);
         }
        }
       }
      }
}
