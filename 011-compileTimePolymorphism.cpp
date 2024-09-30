#include<iostream>
using namespace std;

class print{
public:
    void show(){
        cout<< "hello" <<endl;
        
    }

    void show(int n){
        cout<< n <<endl;
        
    }
};
                  
int main(){
    print p1;
    p1.show();
    p1.show(2);  
    return 0;
}