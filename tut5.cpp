#include<iostream>
// There are two types of header files :
// 1. System Header Files: It comes with the compiler.
// 2.  User defined header files: It is written by the Programmer.
// #include "anu.h" --> This will produce an error if anu.h is not present in current directory
using namespace std;       //or std::

int main(){
    int a = 4 , b = 5;            //It is saying that a==b;
    cout<<"Oerators in C++:"<<endl;
    //Following are the types of operators in C++:
    //Arithmetic Operators
    cout<<"The value of a + b is:"<<a+b<<endl;
    cout<<"The value of a - b is:"<<a-b<<endl;
    cout<<"The value of a * b is:"<<a*b<<endl;
    cout<<"The value of a / b is:"<<a/b<<endl;
    cout<<"The value of a % b is:"<<a%b<<endl;
    cout<<"The value of a ++  is:"<<a++<<endl;
    cout<<"The value of a -- is:"<<a--<<endl;
    cout<<"The value of ++a  is:"<<++a<<endl;
    cout<<endl;
    cout<<"New"<<endl;


    //Assingment operators --> used to assign the values to variables
    //int a=33 , b=44;
    //char a='Q';

    // Comparison operators
    cout<<"Following are the comparison operators in C++:"<<endl;
    cout<<"The value of a == b is: "<<(a==b)<<endl;
    cout<<"The value of a < b is: "<<(a<b)<<endl;
    cout<<"The value of a > b is: "<<(a>b)<<endl;
    cout<<"The value of a <= b is: "<<(a<=b)<<endl;
    cout<<"The value of a >= b is: "<<(a>=b)<<endl;
    cout<<"The value of a != b is: "<<(a!=b)<<endl;

    //Logical Operators
    cout<<"Following are the logical operators in C++:"<<endl;
    cout<<"The value of this logical and operator is ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator is ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical or operator is (!(a==b)) is: "<<(!(a==b))<<endl;


    return 0;
}