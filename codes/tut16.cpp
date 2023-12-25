#include<iostream>
using namespace std;


int sum(int a,int b){
    int c=a+b;
    return c;
}

void swap(int x,int y){ //temp   a   b
    int temp = x;       //4      4   5
    x=y;                //4      5   5 
    y=temp;             //4      5   4
}

//call by reference using pointers

void swappointer(int* x,int* y){ //temp   a   b
    int temp = *x;               //4      4   5
    *x=*y;                       //4      5   5 
    *y=temp;                     //4      5   4
}

//call by reference using call by referance

// void swappointer(int* x,int *y){ //temp   a   b
//     int temp = *x;               //4      4   5
//     *x=*y;                       //4      5   5 
//     *y=temp;                     //4      5   4
// }

int & swappointerrefarence(int &x,int &y){ //temp   a   b
    int temp = x;       //4      4   5
    x=y;                //4      5   5 
    y=temp;             //4      5   4
    return x;
}




int main(){
    int a =4,b=5;

    cout<<endl<<"this is a swap function:-"<<endl;
    cout<<"value of a is "<<a<<" & the value of b is "<<b<<endl;
    cout<<"the sum of "<<a<<" & "<< b<<" is :-" <<sum(a,b)<<endl;
    swap(a,b);       //it will not swap because it will not change actual veriables value changes wiil be done in swap function


    cout<<endl<<"this is a swappointer function:-"<<endl;
    // swappointer(&a,&b);    //this will work
    swappointerrefarence(a,b);
    cout<<"value of a is "<<a<<" & the value of b is "<<b<<endl;
    cout<<"the sum of "<<a<<" & "<< b<<" is :-" <<sum(a,b)<<endl;
    swappointerrefarence(a,b)=766;
    cout<<"changed the value of a :-"<<a<<endl;


    return 0;
}