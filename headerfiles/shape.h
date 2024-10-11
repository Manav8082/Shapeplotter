#include<vector>
#include"point.h"
#include"polygon.h"
#include"triangle.h"
#include"line.h"
#include"Rectangle.h"
#include"Square.h"
#include"circle.h"
using namespace std;
class shape{
    public:
    vector<point> points;
    virtual void draw()=0;
};