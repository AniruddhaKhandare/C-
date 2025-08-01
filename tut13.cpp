#include<iostream>

using namespace std;

typedef struct employee
{
    int eId; //4
    char favchar;  //1
    float salary;  //4
} ep;

 union money
{
    int rice;  //4
    char car;   //1
    float pounds;  //4
};


//*******employee is ep**********
int main(){
    enum Meal{ breakfast , lunch , dinner };
    Meal m1 = lunch;
    cout<<(m1==2);
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;
    union money m1;
    /*m1.rice = 34;
    m1.car = 'c';
    cout<<m1.car;*/

    ep aniruddha;
    struct employee aniruddha;
    struct employee yash;
    aniruddha.eId = 2;
    aniruddha.favchar= 'n';
    aniruddha.salary = 340000000;
    cout<<"The value is "<<aniruddha.eId<<endl;
    cout<<"The value is "<<aniruddha.favchar<<endl;
    cout<<"The value is "<<aniruddha.salary<<endl;

    return 0;
}