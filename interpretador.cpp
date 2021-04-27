#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "sculptor.h"
#include "figurageometrica.h"
#include "interpretador.h"
#include "putVoxel.h"
#include "cutVoxel.h"
#include "putBox.h"
#include "cutBox.h"
#include "putSphere.h"
#include "cutSphere.h"
#include "putEllipsoid.h"
#include "cutEllipsoid.h"

Interpretador::Interpretador(){}

 vector<FiguraGeometrica*> Interpretador::interpreta(string filename){
     vector<FiguraGeometrica*> fig;
     ifstream fin;
     stringstream tam;
     string s, teste;

    fin.open("ARQUIVO_ESCULTOR.txt");
      if(!fin.is_open()){
        cout << "ERRO AO ABRIR O ARQUIVO" << endl;
        exit(0);
       }
       cout << "ARQUIVO ABERTO COM SUCESSO" << endl;
    while(fin.good()){
    getline(fin, s);
    if(fin.good()){
        tam.clear();
        tam.str(s);
        tam >> teste;
        if(tam.good()){
          if(teste.compare("dim") == 0){
            tam >> dimx >> dimy >> dimz;
          }
          else if(teste.compare("putVoxel") == 0){
            int x0,y0,z0;
            tam >> x0 >> y0 >> z0 >> r >> g >> b >> a;
            fig.push_back(new putVoxel(x0,y0,z0,r,g,b,a));
          } else if(teste.compare("cutVoxel") == 0){
            int x0,y0,z0;
            tam >> x0 >> y0 >> z0;
            fig.push_back(new cutVoxel(x0,y0,z0));
          } else if(teste.compare("putBox") == 0){
            int x0, x1, y0, y1, z0, z1;
            tam >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
            fig.push_back(new putBox(x0,x1,y0,y1,z0,z1,r,g,b,a));
          } else if(teste.compare("cutBox") == 0){
            int x0, x1, y0, y1, z0, z1;
            tam >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
            fig.push_back(new cutBox(x0,x1,y0,y1,z0,z1));
          } else if(teste.compare("putSphere") == 0){
            int x0, y0, z0, rr;
            tam >> x0 >> y0 >> z0 >> rr >> r >> g >> b >> a;
            fig.push_back(new putSphere(x0,y0,z0,rr,r,g,b,a));
          } else if(teste.compare("cutSphere") == 0){
            int x0, y0, z0, rr;
            tam >> x0 >> y0 >> z0 >> rr;
            fig.push_back(new cutSphere(x0,y0,z0,rr));
          } else if(teste.compare("putEllipsoid") == 0){
            int x0, y0, z0, rx, ry, rz;
            tam >> x0 >> y0 >> z0 >> rx >> ry >> rz >> r >> g >> b >> a;
            fig.push_back(new putEllipsoid(x0,y0,z0,rx,ry,rz,r,g,b,a));
          } else if(teste.compare("cutEllipsoid") == 0){
            int x0, y0, z0, rx, ry, rz;
            tam >> x0 >> y0 >> z0 >> rx >> ry >> rz;
            fig.push_back(new cutEllipsoid(x0,y0,z0,rx,ry,rz));
          }
        }
      }
    }
        return(fig);
 }

int Interpretador::getDimX(){
    return dimx;
 }
int Interpretador::getDimY(){
    return dimy;
 }
int Interpretador::getDimZ(){
    return dimz;
 }

