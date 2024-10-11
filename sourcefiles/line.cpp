
#include<iostream>
#include"line.h"
using namespace std;
line::line(): p1(0,0), p2(1,1) {}
line::~line(){}
void line::getline() {
    double x1,x2;
    double y1,y2;
    cout<<"enter the 1st coordinate of a line"<<endl;
    cin>>x1;
    cin>>y1;
    cout<<"enter the 2nd coordinate of a line"<<endl;
    cin>>x2;
    cin>>y2;
    p1=point(x1,y1);
    p2=point(x2,y2);
}