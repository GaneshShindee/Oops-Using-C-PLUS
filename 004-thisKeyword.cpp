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

    //this is pointer of the object t2 in thia code
    //this stores the address of the object
    Teacher(string name,string dept,string subject,double sal){
        this->name=name;
        this->dept=dept;
        *(this).subject=subject;//address of the subject address
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