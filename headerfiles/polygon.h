#pragma once
#include "point.h"
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
class Polygon {
public:
    vector<point> PolyVec;
    Polygon();
    Polygon(vector<point> PolyVec);
    void getpoly();
    void getcoord();
};