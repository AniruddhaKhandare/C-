#include<iostream>

using namespace std;
class Complex
{
    int a, b;

public:

    Complex(int,int); // Constructor declaration
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x , int y) //----> This is a paramerterized contructor as it accepts 2 parametrs
{
    a = x;
    b = y;
}

int main(){
    //Implicit call
    Complex a(4 , 6);

    //Explicit call
    Complex b = Complex(5,7);

    a.printNumber();

    b.printNumber();

    return 0;
}