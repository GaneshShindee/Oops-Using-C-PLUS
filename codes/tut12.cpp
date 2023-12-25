#include<iostream>
using namespace std;
                  
int main(){
     //*********************what is pointers**********************
     //which holds the address of other data types



    //one form of writing pointer
     int a =3;
     int *b= &a;            //ponter veriable 
     


    //another form of writing pointer
    int c= 4;
    int *d;
    d=&c;


    //where b is pointer which is storing address of a
      //& ---> address of operator
      //*---->derefrence operator



    //   cout<<b<<endl;  //output gives address of memory during runtime
      cout<<endl;
      cout<<"This is a and b pointers:-"<<endl<<endl;
      cout<<"Address of a is using &c :- "<<&a<<endl;  //gives the memory where is stored
      cout<<"Address of a is using d:- "<<b<<endl;   //gives the memory where is stored
      cout<<"the value of a is using *d:- "<<*b<<endl;    //gives the value of a
      cout<<"the value of a is using c:- "<<a<<endl;  //gives the value of a
      cout<<endl;


      cout<<"this is c and d pointers"<<endl<<endl;
      cout<<"Address of c is using &C :- "<<&c<<endl;  //gives the memory where is stored
      cout<<"Address of c is using d :- "<<d<<endl;   //gives the memory where is stored
      cout<<"the value of c is using *d:- "<<*d<<endl;    //gives the value of c
      cout<<"the value of c is using c:- "<<c<<endl<<endl;  //gives the value of c

      int **e =&b;
      cout<<"the address of b is"<<&b<<endl;
      cout<<"the address of b is"<<e<<endl;
      cout<<"the value at address (c) :- "<<*e<<endl;
      cout<<"the address of pointer b( at address (b)) :- "<<**e<<endl;


    return 0;
}