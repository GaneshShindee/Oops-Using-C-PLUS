#include<iostream>
using namespace std;

class Teacher{
private:
    double salary;    
public:    
    string name;
    string dept;
    string subject;

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


class Account{
private:
    double balance;
    string password;
public:
    string accountName;
    string username;

    Account(){
        cout<< "hello i am constructor" <<endl;
        
    }

};
                  
int main(){
    Teacher t1;//call to the constructor
    t1.name="ganesh";
    t1.dept="Entc";
    // t1.salary =225;
    t1.subject="maths";
    t1.setSalary(2.023);
    cout<< t1.getSalary() <<endl;
    

    cout<< t1.name <<endl;

    Account a1;
    
    return 0;
}