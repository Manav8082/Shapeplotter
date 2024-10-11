#include "polygon.h"
#include "point.h"
using namespace std;
Polygon::Polygon(){};
Polygon::Polygon(vector<point> PolyVec){ };
void Polygon::getpoly(){
   ofstream outfile("output.dat");
   int n;
   cout<<"enter no. of points for polygon"<<endl;
   cin>>n;
for(int i=1;i<=n;i++){
   double x;
   double y;
   cout<<"enter x,y coordinate of point "<<i<<endl;
   cin>>x>>y;
   
   point p(x,y);
   outfile<<p.x<<" "<<p.y<<endl;
}
}
void Polygon::getcoord(){
    for (int i = 0; i < PolyVec.size(); i++)  {  
        cout << "(" << PolyVec[i].x <<","<< PolyVec[i].y << ") " << endl;
    } 
}
