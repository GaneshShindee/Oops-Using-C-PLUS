#include<iostream>
using namespace std;


    // factorial of a number
    //6! = 6*5*4*3*2*1
    // 0!=1 by definiation
    // n! = n*(n-1)!



int factorial (int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}


int fib(int n){
    if (n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}


///                  
int main(){

    int a ;
    cout<<"enter a number :-"<<endl;
    cin>>a;
    // cout<<"factorial is:- "<<factorial(a);
    cout<<"the fibonacci series term number is:- "<<endl;
    for (int i = 0; i < a; i++)
    {
        /* code */cout<<fib(i)<<" ";

    }
    
    // cout<<"the term in fibonacci series "<<fib(a)<<endl;


    return 0;
}