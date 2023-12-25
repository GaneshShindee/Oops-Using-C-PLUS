#include<iostream>
using namespace std;

    //*********how to create structure*************

    // diffrent tyes of data types this is structure
    //below example has subham ram and ganesh are data types now


// struct employee
// {
//     /* data */
//     int id;
//     char favchar;
//     float salary;
// };


// to ease the code we use the typedef as shown below where ep is the data tpye now
//meaning of typedef is nothing but struct employee is nothing but ep


typedef struct employee
{
    /* data */
    int id;
    char favchar;
    float salary;
}ep;


//**********use only one  of the data type from the union*********
//**********use of better memory optamisitaion**********


union money
{
    /* data */
    int rice;        //4 byte
    char car;        //1 byte
    float pounds;    //4 byte
};

                  
int main(){


    //---------> array is used to same type of data type
    //----------> struct is used to diffrent data type

     struct employee ganesh;
     ganesh.id=1;
     ganesh.favchar='c';
     ganesh.salary=1200;

     struct employee shubham;
     shubham.salary=1000;
     shubham.favchar='v';
     shubham.id =2;

     struct employee ram;
     ram.salary=900;
     ram.favchar='j';
     ram.id=5;


     struct employee harry;
     harry.salary=9000;
     harry.favchar='d';
     harry.id=6;




    //********** here by using typedef created a datatype named shlok using ep*************



    ep shlok;
    shlok.favchar='g';
    shlok.salary=200;
    shlok.id=4;
     


     cout<<endl<<"this data is of ganesh"<<endl;
     cout<<"the salary is "<<ganesh.salary<<endl;
     cout<<"the id is "<<ganesh.id<<endl;
     cout<<"the favchar is "<<ganesh.favchar<<endl;
     
     cout<<endl<<"this data is of shubham"<<endl;
     cout<<"the salary is "<<shubham.salary<<endl;
     cout<<"the id is "<<shubham.id<<endl;
     cout<<"the favchar is "<<shubham.favchar<<endl;

     cout<<endl<<"this data is of ram"<<endl;
     cout<<"the salary is "<<ram.salary<<endl;
     cout<<"the id is "<<ram.id<<endl;
     cout<<"the favchar is "<<ram.favchar<<endl;

     cout<<endl<<"this data is of Shlok"<<endl;
     cout<<"the salary is "<<shlok.salary<<endl;
     cout<<"the id is "<<shlok.id<<endl;
     cout<<"the favchar is "<<shlok.favchar<<endl;


    //**********union ************************
    // i will not  correct value when i cout the rice and car (two data type) last one i will get correct value 
    //i will get garbage value of rice in below example


    union money m1;
    m1.rice =34;
    m1.car ='d';
    cout<<endl<<"gives only in rice :-"<<m1.rice<<endl;
    cout<<"gives only in car :-"<<m1.car<<endl<<endl;  




    //*********************enum******************
    

    enum meal{breakfast ,lunch ,dinner};
    meal m1 =breakfast;
    
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;



    return 0;
}