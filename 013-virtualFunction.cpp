#include<iostream>
using namespace std;

class Parent{
public:
    void show(){
        cout<< "Parent class" <<endl;
        
    }

    virtual void hello(){
        cout<< "hello from child" <<endl;
        
    }
};

class child:public Parent{
public:
    void show(){
        cout<< "child class" <<endl;
        
    }

    void hello(){
        cout<< "hello from parrent" <<endl;
        
    }
};
                  
int main(){
    child c1;
    c1.show();  
    return 0;
}