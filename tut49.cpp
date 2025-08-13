#include <iostream>

using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument -list) : initialization-section
{
    assignment + other code;
}

class Test{
    int a;
    int b;
    public:
        Test(int i,int j) : a(i), b(j){cout<<"Contructor executed;"}
}
*/

class Test
{
    int a;
    int b;

public:
    //Test(int i, int j) : a(i), b(j)
    //Test(int i, int j) : a(i), b(i+j)
    //Test(int i, int j) : a(i), b(2 * j)
    //Test(int i, int j) :  a(i), b(a + j),
    //Test(int i, int j) :  b(j), a(i+b) --->RED FLAG THIS WILL CERATE PROBLEMS BECAUSE a will be initialize first
    //Test(int i, int j) : b(j) ,a(i+b)
    Test(int i, int j) : a(i)
      {
          a = i;
          b = j;
        cout << "Contructor executed";
        cout << "The value of a is " << a<<endl;
        cout << "The value of b is " << b<<endl;
    }
};
int main()
{
    Test t(4, 6);

    return 0;
}