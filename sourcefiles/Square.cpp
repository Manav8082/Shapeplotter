#include<iostream>
#include"Square.h"
#include<fstream>
using namespace std;
Square::Square():p1(0,0),
p2(1,0),p3(1,1),p4(0,1){
}
Square::~Square(){
}
void Square::get_Square(){
   ofstream outfile("output.dat");
   double x1;
   double y1;
   int len;
   cout<<"enter x,y coordinate of left lower point"<<endl;
   cin>>x1>>y1;
   cout<<"enter the length of square:"<<endl;
   cin>>len;
   p1=point(x1,y1);
   p2=point(x1+len,y1);
   p3=point(x1+len,y1+len);
   p4=point(x1,y1+len);
   generateshape();
}
void Square::generateshape(){}