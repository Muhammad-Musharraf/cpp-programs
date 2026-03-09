#include<iostream>
using namespace std;
int main()
{
    // Q # 1 Sum of two numbers
    int a=12;
    int b=13;

    int Sum=a+b;
    cout<<Sum<<endl;
    // Q # 2 Area of a rectangle
    // A = w * l
    int length=4;
    int width=50;

    int Area=length * width;
    cout<<Area<< endl;

    // Q # 3 Swap two variables
    int x= 4;
    int y=9;

    // Temporary variable for swapping
    int temp;

    // swap
    temp=x;
    x=y;
    y=temp;

    // output
    cout<< x << " : " <<y <<endl;

    // Q # 4 store marks of 5 subjects
    int m1, m2, m3, m4,m5;
    m1=80;
    m2=90;
    m3=75;
    m4=65;
    m5=80;

    // add obtained marks 
    int obtained=m1+m2+m3+m4+m5;

    // Total marks
    int total=500;
    cout<<"Total "<<total<<endl;
   
    
    // Calculate Percntage
    float percentage=((float) obtained/total)*100;

    // Percentage
    cout<<"Percentage: "<<percentage<<endl;


// single line Comments

//Multiple line Comments

/* The World Bank Group (WBG) is a family of five international organizations that make leveraged loans to developing countries.
 It is the largest and best-known development bank in the world and an observer at the United Nations Development Group.
  The bank is headquartered in Washington, D.C., in the United States. It provided around $98.83 billion in loans and 
  assistance to "developing" and transition countries in the 2021 fiscal year.The bank's stated mission 
  is to achieve the twin goals of ending extreme poverty and building shared prosperity.
*/







    return 0;
    
} 
