#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;    
public:    
    string name;
    string dept;
    string subject;

    Teacher(string n,string d,string sub,double sal){
        name=n;
        dept=d;
        subject=sub;
        salary=sal;
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
    // Teacher t1;//call to the constructor
    
    Teacher t2("Ganesh","entc","maths",524);
    t2.setSalary(204);
    cout<<t2.getSalary();
    

    // cout<< t1.name <<endl;

    // Account a1;
    
    return 0;
}