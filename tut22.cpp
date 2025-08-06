// OOPs - Classes and objects

// C++  --> initially called  --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      -  Members are public
//      -  No methods
// classes --> strutures + more
// classes --> can have methods and properties
// classes --> can make fewmembers as private & few as public
// strutures in C++ are typedefed
// you can declare objects along with the class declaration like this
/* class Employee{
                Class definition 
            }harry,rohan,akshay;
    */
//aniruddha.salary = 8 makes no sense if salary is private;
//*******************************************************************************
// Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class binary
{
private: //by default class members are private only
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones_compliment(void)
{
    chk_bin(); //no error
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Display your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    //b.chk_bin();
    b.ones_compliment();
    b.display();
    b.display();
    return 0;
}