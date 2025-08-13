#include<iostream>

using namespace std;

/*
Inheritance:
student --->test [Done]
student --->sports[Done]
test --->result [Done]
sports --->result[Done]
*/

class student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout<<"Your roll no is "<< roll_no<<endl;
        }
};

class Test : virtual public student{
    protected:
        float maths,physics;
    public:
        void set_marks(float m1,float m2){
            maths = m1;
            physics = m2;
            }

            void print_marks(void){
                cout <<"Your result is here: "<<endl
                <<"Maths: "<< maths<<endl
                <<"Physics: "<< physics<<endl;
            }
};

class Sports : virtual public student {
    protected:
        float score;
    public:
    void set_score(float sc){
        score = sc;
    }

    void print_score(void){
        cout<<"Your PT score is:"<<score<<endl;
    }
};


class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is: "<<total<<endl;
        }
};


int main(){
    Result Anu;
    Anu.set_number(1319);
    Anu.set_marks(93.6,89.5);
    Anu.set_score(10);
    Anu.display();
    return 0;
}