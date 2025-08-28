#include<iostream>

using namespace std;

template <class T1=int , class T2=float , class T3=char>
class Anu{
    public:
        T1 a;
        T2 b;
        T3 c;
        Anu(T1 x, T2 y,T3 z) {
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            
        }
};
int main(){
    Anu<> A(8 , 6.4, 'c');
    A.display();
    cout<<endl;
    Anu<float,char,char> n(8 , 'o', 'c');
    n.display();
    return 0;
}