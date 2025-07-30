#include<iostream>

using namespace std;

int main(){
    /*Loops in C++:
    There are Three types of loops in C++:
    1. For Loop
    2. While Loop
    3. Do while Loop*/

    //For Loop in C++
    int i=6;
    cout<<i<<endl;
    i*6;

    /*Syntax For for loop
    for(initialiazation; condition; updation)
        {
        loop body(C++ code);
    }*/

    for (int i = 1; i <= 40; i++)
    {
        /* code */    
        cout<<i<<endl;

    }
   // Example if infinite for loop
   //for (int i = 1; 34 <= 40; i++)                       **imp**
   //{
    //   /* code */
    //   cout<<i<<endl;
   //}
   

    //While Loop in C++
    //Syntax:
    //While(condition):
    //{
    //    C++ statements;
    //}

    //Printing 1 to 40 using while loop
    int i=1;
    while(i<=40){
        cout<<i<<endl;
        i++;
    }

    // }
   // Example if infinite for loop
   //for (int i = 1; 34 <= 40; i++)             **imp**
   //{
    //   /* code */
    //   cout<<i<<endl;
   //}

   // }
   // Example if infinite while loop                   **imp**
   //int i = 1;
   //while(true){
     //  cout<<i<<endl;
       //i++;
   //}

    //While Loop in C++
    //Syntax:
    // do
    //{
    //    C++ statements;
    //} while(condition);
//Printing 1 to 40 using  do while loop
    int i=1;
    do{
        cout<<i<<endl;
        i++;
        }
        while(false);
    
    return 0;
}
