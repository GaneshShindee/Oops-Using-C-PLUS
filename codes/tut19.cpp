#include<iostream>
using namespace std;

//*************Two function with same name****************
int sum(int a ,int b){
    cout<<"using function with 2 argument:- "<<endl;
    return a+b;
} 

int sum(int a ,int b,int c){
    cout<<"using function with 3 argument:- "<<endl;
    return a+b+c;
} 

//calculate voulme of a cylinder
int volume(double r, int h){
    return (3.14*r*r*h);
}

//calculate volume of a cube
int volume(int a){
    return a*a*a;
}

//calculate volume of cube
int volume(int l, int b ,int h){
    return(l*b*h);
}

int main(){
    cout<<endl<<"The sum of 3 and 6 is:- "<<sum(3,6)<<endl<<endl;
    cout<<"The sum of 3 , 5 and 6 is:- "<<sum(3,5,6)<<endl<<endl<<endl;
    cout<<"The volume of cube 3 , 7 and 6 is:- "<<volume(3,5,6)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is:- "<<volume(3,6)<<endl;
    cout<<"The volume of cube is:- "<<volume(3)<<endl;

    return 0; 
}