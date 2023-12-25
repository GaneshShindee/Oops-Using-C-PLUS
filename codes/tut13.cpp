#include<iostream>
using namespace std;
                  
int main(){
    //*****************Arrays***************
    //collection of similar data types
    

    //*******delclaring array**********
    //type 1;


    int marks[5]={8,9,7,6,5};
 // int marks[]={8,9,7,6,5};  this also same array automatic reconize the size of array
    


    cout<<endl<<"this is cgpa marks:-"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    //type 2 declaring array
    int mathmarks[4]; //here we have to declare the size of array
    mathmarks[0]=25;
    mathmarks[1]=22;
    mathmarks[2]=24;
    mathmarks[3]=23;

    cout<<endl<<"this is maths marks:-"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    mathmarks[2]=27;    //this is how we change the value of an array
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    //********print array using loop*************
    cout<<endl<<"marks printing using the for loop "<<endl;
    for (int i = 0; i < 4; i++)
    {   
        cout<<"the value of marks at index "<<i<<" is "<<marks[i]<<endl;
    }

    cout<<endl<<"mathmarks printing using the for loop "<<endl;

    for (int i = 0; i < 4; i++)
    {   
        cout<<"the value of mathmarks at index "<<i<<" is "<<mathmarks[i]<<endl;
    }    
    

    //********using while loop ****************
    cout<<endl<<"printed using while loop"<<endl;
    int i=0;
    while (i<5)
    {
        cout<<"the value of mathmarks at index "<<i<<" is "<<marks[i]<<endl;
        i++;
    }
    
    //********using while loop ****************
    cout<<endl<<"printed using do while loop"<<endl;
    int j=0;  
    do
    {
      cout<<"the value of mathmarks at index "<<j<<" is "<<marks[j]<<endl;
      j++;
    } while (j<5);
    





     //**********pointers and arrays ******************


    cout<<endl<<"printed using the pointer"<<endl;
    int *p = marks;   // no need of writing & in this address
    cout<<*p<<endl;
    cout<<*(p++)<<endl;  // incremted the value of p after the printing     
    cout<<*++p<<endl;    //incremented the value of p before printing


    // cout<<"the value of marks[0] is "<< *p<<endl;
    // cout<<"the value of marks[1] is "<< *(p+1)<<endl;
    // cout<<"the value of marks[2] is "<< *(p+2)<<endl;
    // cout<<"the value of marks[3] is "<< *(p+3)<<endl;
    // cout<<"the value of marks[4] is "<< *(p+4)<<endl;
    
    


    return 0;
}