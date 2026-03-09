#include<iostream>
using namespace std;
int main(){
    // what is pointer?? ------> Pointer which holds the Address of others Data Types
    int a=3;

    int*b = &a;


    // & ----> (Address of) Operators
    cout<<"The Address of a is:"<<&a << endl;
    cout<<"The Address of b is:"<<b << endl ;


    // '*' (Value at )derefreance operators
    cout<<"The Value of Address of b is: "<<*b << endl ;

    int**c =&b;

    cout<<"The address  of b is: "<<&b <<endl;
    cout<< "The Address of b is: "<<c<<endl;

    cout<<"The value at address c is: "<<*c<<endl;
    cout<<"The value at address value at (value_at(c))  is: "<<**c <<endl;






    




    return 0;
}

