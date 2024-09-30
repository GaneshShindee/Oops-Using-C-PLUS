#include<iostream>
using namespace std;

class person{
public:    
    string name;
    int age;

    person(){
        cout<< "parent class " <<endl;
        

    }
    ~person(){
        cout<< "delete person" <<endl;
        
    }

};


//some properties inherted from the person class

//if we inherted first parent constructor get called and then child constructor
class student:public person{
public:
    int rollno;

    student(){
        cout<< "chiled constructor" <<endl;
        
    }

    void getInfo(){ 
    cout <<"name :"<<name<<endl;
    cout <<"age :"<<age<<endl;
    cout <<"roll no :"<<rollno<<endl;
    }

    ~student(){
        cout<< "delete student" <<endl;
        
    }

};


class parent : public student{
    string Schoolinfo;

};



                  
int main(){
    student s1;
    s1.name="ganesh";
    s1.age=25;
    s1.rollno=313056;

    s1.getInfo();
    
    return 0;
}