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
    

    void getInfo(){
        cout<< "name:"<<name <<endl;
        cout<< "dept:"<<dept <<endl;
        cout<< "subject:"<<subject<<endl;
        // cout<< "salary:"<<salary <<endl;
        
    }

    void changeDept(string dept){
        this->dept=dept;
    }

    //set the value for the private data type of salaray
    void setSalary(int s){
        salary =s;
    }

    //get the value of the salary
    double getSalary(){
        return salary;
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