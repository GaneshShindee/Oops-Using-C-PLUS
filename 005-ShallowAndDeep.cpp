#include<iostream>
using namespace std;

class student{

public:
    string name;
    double *cgpaptr;

    student(string name,double cgpa){
        this->name=name;
        cgpaptr=new double;
        *cgpaptr=cgpa;
    }

    //
    student(student &obj){
        this->name=obj.name;
        cgpaptr=new double;
        *cgpaptr=*obj.cgpaptr;
    }

    void getInfo(){
        cout<< name <<endl;
        cout<< *cgpaptr <<endl;
        
        
    }

};
               
int main(){
    student a1("ganesh",2.3);
    

    student a2(a1);
    a1.getInfo();
    a2.getInfo();
    *(a2.cgpaptr)=9.2;
    a2.name="ramesh";
    a1.getInfo();//if pointer is in the code then thai is pointer so it change the value of from coiped obj

    a2.getInfo();
    
    return 0;
}