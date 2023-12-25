#include <iostream>
using namespace std;

int main(){
    // *******************if else statement*****************

    int age;
    cout<<"tell me your age:";
    cin>>age;

//     if (age <18){
//         cout<<"you cannot come to party"<<endl;
//         }
//     else if(age == 18){
//         cout<<"you are acurate to come party"<<endl;
//     }    
//     else {
//         cout<<"you can come to party"<<endl;
//     }
//     return 0;

     switch (age)
     {
     case 6:
        cout<<"you are 18"<<endl;
        break;
     
     case 200:
        cout<<"you are 19"<<endl;
        break;
     
     case 20:
        cout<<"you are 20"<<endl;
        break;
     
     default:
     cout<<"no special  cases:"<<endl;
        break;
     }
    return 0;
}