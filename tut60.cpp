#include<iostream>
#include<fstream>

/*
The useful classes for working with the files in C++ are:
1. fstreambase
2. ifstream ---> derived from fstreambase
3. ofstream ---> derived from fstreambase

In order to work with files in C++ , you will have to open it. Primarily, there are 2 ways to open a file:
1. Using the constructor 
2. Using the member function open() of the class
*/
using namespace std;

int main(){
    string st = "Anu bhai";
    string st2;
    //Opening files using construcor and writng it
    ofstream out("sample60.txt"); // write operation
    out<<st;

  //  Opening files using construcor and reading it
  //  ifstream in("sample60b.txt"); // write operation
  //  in>>st2;
  //  getline(in, st2);
  //  cout<<st2;

    return 0;
}