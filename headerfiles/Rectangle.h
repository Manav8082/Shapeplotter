#pragma once
#include"point.h" 
#include<vector>
class Rectangle{
    public:
    point p1,p2,p3,p4;
    // vector<point> rect_getvertices;
    Rectangle();
    ~Rectangle();
    void getRect();
    void generateshape();

};