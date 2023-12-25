#include <iostream>
using namespace std;

int main(){
    // ****************FLOAT DOUBLE LONG DOUBLE LITERALS*******************

    // float d= 2.3F    ;//this is a float
    // long double e =2.3L;//this is double
    // // 2.3f
    // cout<<"the size of 2.3F is "<<sizeof(2.3F)<<endl;
    // cout<<"the size of 2.3f is "<<sizeof(2.3f)<<endl;
    // cout<<"the size of 2.3 is "<<sizeof(2.3)<<endl;
    // cout<<"the size of 2.3L is "<<sizeof(2.3L)<<endl;
    // cout<<"the size of 2.3l is "<<sizeof(2.3l)<<endl;
    // cout<<"the value of d is "<<d <<endl <<"the value of e is "<<e<<endl;



    //************************REFERANCE VARIABLE*****************************
    // ganesh------>ganya------------>sprint
    // pooja------->pranita----------->didi 

    float x =51;
    float & y =x ;
    cout<<x<<endl <<y<<endl;  



    // ****************type casting*****************
    int a = 4;
    float b =2.12;
    float c = 2.99;
    cout<<"value of a is "<<(float)a <<endl;
    cout<<"value of a is "<<(int)b <<endl;
    cout<<"value of a is "<<(int)c <<endl;

    int d =int(b);
    cout<<"the output is " << a +b<<endl;
    cout<<"the output is " << a +int(b)<<endl;
    cout<<"the output is " << a +(int)b<<endl;
    
    return 0;
}