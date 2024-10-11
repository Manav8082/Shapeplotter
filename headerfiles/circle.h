#pragma once
#include"point.h"
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
class circle{
    public:
    vector<point> coords;
    point mcentre;
    float mradius;
    circle();
    ~circle();
    void get_circle();

    

};