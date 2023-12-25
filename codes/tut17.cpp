#include<iostream>
using namespace std;


//************function of product a and b****************
int product(int a, int b){
    int c= a*b;             //not recommened to use static with inline function
    static int  d =0;      //this executes only ones
    d=d+1;                 //next time this function is run , the value of c will be retained
    return c+d;
}


    //*********inline function**   
    // we reuest compiler to make inline function if function is valid for makinf invalid 
    // function it depends on compiler that compiler will make inline or not make inline function


//***********************default arguments*************************
// first variable is written which is change able anddefault argument should have written to extreme right
float moneyReceived(int currentmoney ,float factor = 1.04){
      return currentmoney*factor;
     
}    
int main(){
    // int a ,b;
    // cout<<"enter the value of a and b:- "<<endl;
    // cin>>a>>b;
    // cout<<"product is :-"<<product(a,b)<<endl;
    // cout<<"product is :-"<<product(a,b)<<endl;
    // cout<<"product is :-"<<product(a,b)<<endl;
    // cout<<"product is :-"<<product(a,b)<<endl;
    // cout<<"product is :-"<<product(a,b)<<endl;
    // cout<<"product is :-"<<product(a,b)<<endl;
    // cout<<"product is :-"<<product(a,b)<<endl;
    // cout<<"product is :-"<<product(a,b)<<endl;
    // cout<<"product is :-"<<product(a,b)<<endl;
    // cout<<"product is :-"<<product(a,b)<<endl;
    // cout<<"product is :-"<<product(a,b)<<endl;
    // cout<<"product is :-"<<product(a,b)<<endl;
    // cout<<"product is :-"<<product(a,b)<<endl;
    // cout<<"product is :-"<<product(a,b)<<endl;
    // cout<<"product is :-"<<product(a,b)<<endl;



    //***********money function*****************

    // int c ,d;
    // cout<<endl<<"Enter the value of c and d:-"<<endl;
    // cin>>c>>d; 
    int money=100000;
    cout<<"If you have "<< money<< " you will recive money "<<moneyReceived(money)<<" rs after one year"<<endl;          //factor is not given it takes default value
    cout<<"If you have "<< money<< " you will recive money "<<moneyReceived(money,1.02)<<" rs after one year"<<endl;     //factor is not given it takes given value
    cout<<"If you have "<< money<< " you will recive money "<<moneyReceived(money,1.03)<<" rs after one year"<<endl;     //factor is not given it takes given value
    cout<<"If you have "<< money<< " you will recive money "<<moneyReceived(money,1.04)<<" rs after one year"<<endl;     //factor is not given it takes given value
    cout<<"If you have "<< money<< " you will recive money "<<moneyReceived(money,1.05)<<" rs after one year"<<endl;     //factor is not given it takes given value
    cout<<"If you have "<< money<< " you will recive money "<<moneyReceived(money,1.06)<<" rs after one year"<<endl;     //factor is not given it takes given value


    return 0;
}