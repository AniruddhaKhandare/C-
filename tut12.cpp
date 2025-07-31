#include<iostream>

using namespace std;

int main(){
    // Array Examples
    int marks[]={39, 38, 46, 41};
    int mathmarks[]={96,66,33,58};
    cout<<"Math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    // You can change the value of an array
    marks[2]=455;
    cout<<"These are Marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    for (int i = 0; i < 4 ; i++)
    {
        cout<<"The value of marks :"<<i<<" is :"<<marks[i]<<endl;    
    }
    // Quick quiz do the same with while and dowhile loop;


    //Pointers and arrays.

    int* p = marks ;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    cout<<"The value of *p is "<<*p<<endl; 
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl; 
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;  
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}