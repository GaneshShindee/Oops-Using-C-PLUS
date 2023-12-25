#include<iostream>
using namespace std;

// #include <this.h> this will produce an error if there is not present in current directory or file

int main(){
    int a= 15;
    int b = 7;
    cout<<"operators in c++"<<endl;
    //endl prints new line
    cout<<"following are operators"<<endl;
    cout<<"this is Athmatic operator"<<endl;
    cout<<"addition of operator "<<a+b<<endl;
    cout<<"subtraction "<<a-b<<endl;
    cout<<"multipply "<<a*b<<endl;
    cout<<"increment "<<a++<<endl;
    cout<<"decrement "<<a--<<endl;
    cout<<"increment first "<<++a<<endl;
    cout<<"decrement "<<--a<<endl;
    cout<<"divide "<<a/b<<endl;
    cout<<"remaining "<<a%b<<endl;

    //assignment operators
    // used to assign values to variable
    // int a= 3;

    // int a = 5;
    // int b= 6;
    // comparision opeerator
     cout<<"the value of a is "<<(a==b)<<endl;
     cout<<"the value of a is "<<(a!=b)<<endl;
     cout<<"the value of a is "<<(a<=b)<<endl;
     cout<<"the value of a is "<<(a>=b)<<endl;
     cout<<"the value of a is "<<(a<b)<<endl;
     cout<<"the value of a is "<<(a>b)<<endl;


     // logical opeerator
     cout<<"the value of <((a==b)&& (a!=b))logical operator is and is :"<<((a==b)&& (a!=b))<<endl;
     cout<<"the value of <((a==b)|| (a!=b))logical operator or is "<<((a==b)|| (a!=b))<<endl;
     cout<<"the value of <((a==b)! (a!=b))logical operator not equal to is "<<((a==b)! (a!=b))<<endl;



    return 0;
}