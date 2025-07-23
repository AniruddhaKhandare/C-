#include<iostream>

using namespace std;

int glo = 6;//(glo-global);This is the global one;
void sum(){      //void is an empty space;
    int a;
    cout<<glo;
}

int main(){
    int glo = 9;        //Local variable for this int main;       
    glo = 99;
    //int a = 24;
    //int b = 15;
    int a = 24, b = 15;            //write like this saves time;
    float pi = 3.14;
    char c = 'u';
    bool is_true = false;
    sum();
    cout<<glo<< is_true;
    //cout<<"This is tutorial 4.\n Here the value of a is "<<a<<".\n Here the value of b is "<<b;
    //cout<<"\n The value of pi is: "<<pi;
    //cout<<"\n The value of c is: "<<c;
    //we can also write endl;--\n;
    return 0;
}