#include<iostream>
using namespace std;



        //**************created a function ******************
int sum(int a,int b){
    int c= a+b;
    return c;
}          
 


 //************this is function prototype*****************
   int multiply(int a,int b);
// int multiply(int a,b);    //this is not  acceptable gives an error
   int multiply(int,int);

   void g(void);     //accetable
   void g();         //accetable



int main(){
    int num1,num2;
    cout<<"enter first num "<<endl;
    cin>>num1;
    cout<<"enter second num "<<endl;
    cin>>num2;
    cout<<"the sum is "<<sum(num1,num2)<<endl;
    cout<<"the multiply is "<<multiply(num1,num2);
    g();

    

    return 0;
}


int multiply(int a,int b){
    int c=a*b;
    return c;
}

void g(){
    cout<<endl<<"hello, good morning:-"<<endl;
}
