#include"fileinput.h"
#include"point.h"
#include"line.h"
#include"triangle.h"
#include"Square.h"
#include"Rectangle.h"
#include"polygon.h"
#include<vector>
#include "writer.h"
#include "circle.h"
void input::get_input(){
    vector<point> getpoints;
    int choice;
        cout << "  | Choose shape to draw:     |\n";
        cout << "  |1. Point                   |\n";
        cout << "  |2. Line                    |\n";
        cout << "  |3. Triangle                |\n";
        cout << "  |4. Square                  |\n";
        cout << "  |5. Rectangle               |\n";
        cout << "  |6. Circle                  |\n";
        cout << "  |7. Polygon                  |\n";
        cout << "  |8. Exit                    |\n";
        cout << "  -----------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;
    line l;
    triangle t;
    // Square s;
    Rectangle r;
    if(choice==1){
        point p;
        p.getcoodinates();
        getpoints.push_back(p);
    }
    else if(choice==2){
        line l;
        l.getline();
        getpoints.push_back(l.p1);
        getpoints.push_back(l.p2);
    }
    else if(choice==3){
        triangle t;
        t.gettriangle();
        getpoints.push_back(t.p1);
        getpoints.push_back(t.p2);
        getpoints.push_back(t.p3);


    }
    else if(choice==4){
        Square s;
        s.get_Square();
        getpoints.push_back(s.p1);
        getpoints.push_back(s.p2);
        getpoints.push_back(s.p3);
        getpoints.push_back(s.p4);

    }
    else if(choice==5){
        Rectangle r;
        r.getRect();
        getpoints.push_back(r.p1);
        getpoints.push_back(r.p2);
        getpoints.push_back(r.p3);
        getpoints.push_back(r.p4);
    }
    else if(choice==6){
        circle c;
        c.get_circle();
         getpoints=c.coords;

    }
    else if(choice==7){
        Polygon pg;
        pg.getpoly();

    }
    else{
        cout<<"wrong choice"<<endl;
    }
    getpoints.push_back(getpoints[0]);
    write w;
    w.writer(getpoints);

    

};