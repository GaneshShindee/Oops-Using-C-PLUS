#include<iostream>
#include<iomanip>
using namespace std;

int main(){
 // ***************use of constant to not changr values**************
    // const float a = 45.2;
    // cout<<"value of a is "<<int(a)<<endl; 


    //a=32;// dont change due to constants
    // cout<<"value of a is "<<int(a)<<endl; 


    //usauge is accidently donot change variable constants
    // after using contants it will not change the variables
         
    // *************manipulator*************
    
    // int a =1, b=5,c=5;

    // cout<<a<<endl;
    // cout<<b<<endl;
    // cout<<c<<endl; 

    // cout<<setw(1)<<a<<endl;
    // cout<<setw(2)<<b<<endl;
    // cout<<setw(3)<<c<<endl;

    // *********operator precedence****************
    int a =4;
    int b =5;
    int c =(a*b)/2;
    cout<<c;

    
    return 0;
}