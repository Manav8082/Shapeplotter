#include <iostream>
#include "point.h"
using namespace std;

point::point(double x, double y) {
    this->x = x;
    this->y = y;
}

point::~point() {
   
}

void point::getcoodinates() {
    cout<<"enter the coordinates of a point"<<endl;
    cin>>x>>y;
}
