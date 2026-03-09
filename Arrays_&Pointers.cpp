#include<iostream>
using namespace std;
int main()
{
    // Arrays Examples

    int marks[4]={23,44,56,78};
    int mathMarks[4];
    mathMarks[0]=232;
    mathMarks[1]=342;
    mathMarks[2]=674;
    mathMarks[3]=542;

    cout<<"These are the math marks:"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;


    // you can change the value of an arrays
    marks[2]=922;
    cout<<"These are  marks:"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;


     // using for loops prints all arrays values

    // for (int i = 0; i<4; i++)
    // {
    //     cout<<"The value of marks at "<< i <<" is: "<<marks[i]<<endl;
    // }

    // using while loops prints all arrays values
    // int i=0;
    // while (i<4)
    // {
    //     cout<<"The value of marks at "<< i <<" is: "<<marks[i]<<endl;

    //     i++;
    // }

     // using do-while loops prints all arrays values
    int i=0;
    do
    {
       cout<<"The value of marks at is: "<<marks[i]<<endl;
       i++;
    } while (i<4);


    // Pointers and arrays 

    int*p = marks;

    cout<<*(p++)<<endl;
    //cout<<*p<<endl;
    cout<<*(++p)<<endl;

    // cout<<"The value of *p is: "<<*p <<endl;
    // cout<<"The value of *(p+1) is: "<<*(p+1) <<endl;
    // cout<<"The value of *(p+2) is: "<<*(p+2) <<endl;
    // cout<<"The value of *(p+3) is: "<<*(p+3) <<endl;



    
    
    

    
    
    return 0;
} 
