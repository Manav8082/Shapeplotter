#include"triangle.h"
triangle::triangle():p1(0,0),p2(1,1),p3(2,0){}
triangle::~triangle(){}
void triangle:: gettriangle(){
    double x1,x2,x3;
    double y1,y2,y3;
    cout<<"enter the 1st coordinate of a triangle"<<endl;
    cin>>x1>>y1;
    cout<<"enter the 2nd coordinate of a triangle"<<endl;
    cin>>x2>>y2;
    cout<<"enter the 3nd coordinate of a triangle"<<endl;
    cin>>x3>>y3;
    p1=point(x1,y1);
    p2=point(x2,y2);
    p3=point(x3,y3);
    generateshape();
}
void triangle:: generateshape(){}
