#include<iostream>
#include<fstream>

using namespace std;

int main(){
   // Connecting our file with Aout stream
    ofstream Aout("sample60.txt");

    // Creating a name string and filling it with string entered by the user
    string name;
    cout<<"Enter your name";
    cin>>name;

    // Writing a string to the file 
    Aout<<name +" Is my Name ";
    Aout.close();
    
// Read function
    ifstream Ain("sample60.txt");
    string content;
    Ain>>content;
    cout<<"The content of this file is: "<<content;
    getline(Ain,content);
    cout<<content;

    Ain.close();

    return 0;
}