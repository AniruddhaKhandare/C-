#include <iostream>

using namespace std;

int c = 45;

int main()
{
    //*************Build in Data types*****************
    int a, b, c;
    cout << "Enter the value of a:" << endl; //Insertion
    cin >> a;                                //Extraction
    cout << "Enter the value of b:" << endl;
    cin >> b;
    c = a + b;
    cout << "The sum is:" << c << endl;
    cout << "The global c is " << ::c; //Scope resolution operator(::)

    //*************Literals(Float,Double&Long Double)**********************

    float d = 65.5f;       //f/F represents that it is a float
    long double e = 65.5l; //l/L represents that it is a long double
    cout << "The size of 65.5 is:" << sizeof(65.5) << endl;
    cout << "The size of 65.5f is:" << sizeof(65.5f) << endl;
    cout << "The size of 65.5F is:" << sizeof(65.5F) << endl;
    cout << "The size of 65.5l is:" << sizeof(65.5l) << endl;
    cout << "The size of 65.5L is:" << sizeof(65.5L) << endl;

    cout << "The value of d is:" << d << endl
         << "The value of e is:" << e; //We only use it for loading purpose.
    //The PC by default gives the ans of 65.5 is double(e) that is why we have to specify it;

    //**********************Reference variables************************

    // Aniruddha -------> Khandare --------> Anu --------- > AK   (Hain toh Ek aadmi na)Refrence is also same as that.

    float x = 888;
    float &y = x; //& is called ampercent.
    cout << x << endl;
    cout << y << endl;

    //****************Typecasting***************
    int a = 50;
    float b = 50.22;
    cout << "The value of a is:" << (float)a << endl;
    cout << "The value of a is:" << float(a) << endl;

    cout << "The value of b is:" << (int)b << endl;
    cout << "The value of b is:" << int(b) << endl;
    int c = int(b);

    cout << "The expression is:" << a + b << endl;
    cout << "The expression is:" << a + int(b) << endl;
    cout << "The expression is:" << a + (int)b << endl;

    return 0;
}