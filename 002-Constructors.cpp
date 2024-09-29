#include<iostream>
using namespace std;

class Teacher{
private:
    double salary;    
public:    
    string name;
    string dept;
    string subject;
    //non parametrised constructor
    Teacher(){
        cout<< "I am a constructor" <<endl;
        
    }

    //parametrised constructor
    Teacher(string n,string d,string sub,double sal){
        name=n;
        dept=d;
        subject=sub;
        salary=sal;
    }

    //copy constructor
    Teacher(Teacher &orgobj){//pass by referance 
        cout<< "I am custom copy constructor" <<endl;
        
        this->name=orgobj.name;
        this->dept=orgobj.dept;
        this->subject=orgobj.subject;

    }


    

    void getInfo(){
        cout<< "name:"<<name <<endl;
        cout<< "dept:"<<dept <<endl;
        cout<< "subject:"<<subject<<endl;
        // cout<< "salary:"<<salary <<endl;
        
    }

};
               
int main(){
    
    Teacher t2("Ganesh","entc","maths",524);
    t2.getInfo();
    // Account a1;

    //copy constrictor 
    //copied the cobject t2(whatever store in the t2 that all copied in the t3 object)
    Teacher t3(t2);
    t3.getInfo();
    
    return 0;
}