#include<iostream>
using namespace std;

int main(){

    // *********loops ***********
    //used for repetative work
    // there are three types in c++
    //while loop
    //for loop 
    //do while loop




    //*********for loop *****************

    //print till 6 

    // int i=1;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;

    // for(int i =1;i<= 6;i++){
    //     cout<<i<<endl;
    // }
    

    // syntax for the for loop 
    // for (size_t i = 0; i < count; i++)
    // {
    //     /* code */
    // }
    





    //************while loop***********

    // syntax:

    // code for type till number
    // int i=0;
    // while (i<=40/* condition */)
    // {
    //     cout<<i<<endl;
    //     i++;
    //     /* code */
    // }




    //*****************do while loop**************
    // loop will run atleast one and then checks rhe condition 

    // syntax
    // do
    // {
    //     /* code */
    // } while (/* condition */);
    
// int i = 1;
//     do{
//         cout<<i<<endl;
//         i++;
//     }while (i<=4);



    // *******multiplication table************

    // by user input table;


    // int table;
    // cout<<"enter table you want:-";
    // cin>>table;

    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<table<<" * "<<i << " = "<<table*i<<endl;
    // }
    




    // *************************table using do while loop*********************
    int taable;
    cout<<"Enter table you need:-"<<endl;
    cin>>taable;

    int  i =1;
    cout<<"Your table of "<<taable<<" is ready:-"<<endl;
    while (i<=10)
    {  
        cout<<taable<<" * "<<i << " = "<<taable*i<<endl;
        i++;
    }
    

    
    
    

    
    return 0;
}