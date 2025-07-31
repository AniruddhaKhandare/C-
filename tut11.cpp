#include<iostream>

using namespace std;

int main(){
    //What is a Pointer?       --------data type which holds the address of other data types

    int a = 3;
    int * b = &a;
    // & ---> (Address of) operator;
    cout<<"The address of a is"<<&a<<endl;             // &--- Address
    cout<<"The address of a is"<<b<<endl;

    // * ---> (Value at)Derefrence of operator
    cout<<"The value at address b is "<<*b<<endl;          // * ---Value

//***Pointer to pointer
    int**c=&b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The value of b is "<<c<<endl;
    cout<<"The value at address of c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) of c is "<<**c<<endl;

    return 0;
}