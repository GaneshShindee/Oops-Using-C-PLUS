#include<iostream>
using namespace std;

abstract class shape{ //this si abstract class
    virtual void draw();  //pure virtual function
};

class circle:public shape{
    public: 
    void draw(){
        cout<< "circle" <<endl;
        
    }
};

int main(){

    circle c1;
    c1.draw();
    
    return 0;
}