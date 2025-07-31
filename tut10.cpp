#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 40; i++)
    {
        if (i == 2)
        {
            break; //Direct loop chya baher yeto direct
        }
        cout << i << endl;
    }

    for (int i = 0; i < 40; i++)
    {
        /* code */
        if (i == 2)
        {
            continue;      //Program run hoto pn jasa 2 baghtoh tasa to parat first part
        }                  //  varti jaato aani 3 to 40 execute karto;
        cout << i << endl; //kindly check the output;
    }

    return 0;
}