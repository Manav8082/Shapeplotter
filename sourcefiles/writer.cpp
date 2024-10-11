#include "writer.h"
void write::writer(vector<point> getpoints){
    point p(double x,double y);
    ofstream myfile("output.dat");
    for(auto i:getpoints){
        myfile<< i.x << " " << i.y <<endl; 
    }
    myfile.close();
    


}