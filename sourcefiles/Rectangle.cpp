#include<iostream>
#include <fstream>
#include"Rectangle.h"
using namespace std;
Rectangle::Rectangle():p1(0,0),
p2(2,0),p3(2,1),p4(0,1){
}
Rectangle::~Rectangle(){
}
void Rectangle::getRect(){
   ofstream outfile("output.dat");

   double x1;
   double y1;
   int len,bre;
   cout<<"enter x,y coordinate of left lower point"<<endl;
   cin>>x1>>y1;
   cout<<"enter length and breadth of rectangle"<<endl;
   cin>>len;
   cin>>bre;
   p1=point(x1,y1);
   p2=point(x1+len,y1);
   p3=point(x1+len,y1+bre);
   p4=point(x1,y1+bre);
   generateshape();
}
void Rectangle::generateshape(){}