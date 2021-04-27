#include <iostream>
#include <vector>
#include <fstream>
#include "Voxel.h"
#include "figurageometrica.h"
#include "sculptor.h"
#include "interpretador.h"
#include "putVoxel.h"
#include "cutVoxel.h"
#include "putBox.h"
#include "cutBox.h"
#include "putSphere.h"
#include "cutSphere.h"
#include "putEllipsoid.h"
#include "cutEllipsoid.h"

using namespace std;

int main()
{
    Sculptor *t_;
    Sculptor t(25,25,25);

    Interpretador inter;
    vector<FiguraGeometrica*> fig;

    fig = inter.interpreta("ARQUIVO_ESCULTOR.txt");

    t_ = new Sculptor(inter.getDimX(), inter.getDimY(), inter.getDimZ());

    for(size_t i = 0; i < fig.size(); i++){
        fig[i]->draw(*t_);
    }

    t_ -> limpaVoxels();
    t_ -> writeOFF((char*)"Pato.off");

    cout << "ESCULTURA DESENHADA" << endl;

    for(size_t i = 0; i < fig.size(); i++){
        delete fig[i];
    }

    delete t_;

    return 0;
}
