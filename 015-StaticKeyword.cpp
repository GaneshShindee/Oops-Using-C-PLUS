#include<iostream>
using namespace std;

voif fun(){
    static int x =2;  
    cout<< x <<endl;
    x++;   //once initialed as static it can not be change it always stays only ince for a life time as x=2
}


class A{
    int x;

    void incx()
}
int main(){
    fun();
    
    return 0;
}


