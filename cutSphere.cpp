#include <iostream>
#include "figurageometrica.h"
#include "cutSphere.h"

cutSphere::cutSphere(int x0, int y0, int z0, int rr){
    this->x0 = x0; this->y0 = y0; this->z0 = z0; this-> rr = rr;
}
void cutSphere::draw(Sculptor &t){
    int i, j, k;
     double r1, r2, r3;
     double raio;
     raio = (double)rr*(double)rr;
      for(i = x0-rr; i < x0+rr; i++){
       for(j = y0-rr; j < y0+rr; j++){
        for(k = z0-rr; k < z0+rr; k++){
          r1 = ((double)(i-x0)*(double)(i-x0));
          r2 = ((double)(j-y0)*(double)(j-y0));
          r3 = ((double)(k-z0)*(double)(k-z0));
         if(r1 + r2 + r3 < raio){
            t.cutVoxel(i,j,k);
         }
        }
       }
      }
}
