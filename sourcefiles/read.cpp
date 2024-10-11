#include"read.h"
void reader::read_file(){
    ifstream myfile("output.dat");
    string line;
    if(myfile.is_open()){
        while(getline(myfile,line)){
            cout<<line<<"\n";
        }
        myfile.close();
    }

}
