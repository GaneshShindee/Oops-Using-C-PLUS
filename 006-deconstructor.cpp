#include<iostream>
using namespace std;

class student{

public:
    string name;
    double *cgpaptr;

    student(){
        cout<< "I allocte memory" <<endl;
        
    }

    student(string name,double cgpa){
        this->name=name;
        cgpaptr=new double;
        *cgpaptr=cgpa;
    }

    ~student(){
        cout<< "i delete every thing" <<endl;
        delete cgpaptr;
    }
    void getInfo(){
        cout<< name <<endl;
        cout<< *cgpaptr <<endl;
        
        
    }

};

               
int main(){
    student a1("ganesh",2.3);
    a1.getInfo();

    

    
    return 0;
}