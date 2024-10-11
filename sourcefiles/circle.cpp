#include "circle.h"
#define PI 3.141592653
circle::circle():mcentre(0,0),mradius(0.0){}
circle::~circle(){}
void circle::get_circle(){
        double x;
        double y;
        cout<<"Enter center point and radius(x,y,radius)"<<endl;
        cin>>x>>y>>mradius;
        mcentre=point(x, y);
        for(double angle=0;angle<=360;angle+=2){
                double radian=angle*(PI/180);
                double x2=x+mradius*cos(radian);
                double y2=y+mradius*sin(radian);
                point coordinate(x2,y2);
                coords.push_back(coordinate);
        }
}