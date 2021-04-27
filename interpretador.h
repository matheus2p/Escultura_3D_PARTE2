#ifndef INTERPRETADOR_H_INCLUDED
#define INTERPRETADOR_H_INCLUDED
#include <vector>
#include <string>
#include "figurageometrica.h"

using namespace std;

class Interpretador{
protected:
    int dimx, dimy, dimz;
    float r,g,b,a;
public:
    Interpretador();
    vector<FiguraGeometrica*>interpreta(string filename);
    int getDimX();
    int getDimY();
    int getDimZ();
};


#endif // INTERPRETADOR_H_INCLUDED
