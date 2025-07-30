#include<iostream>

using namespace std;

int main(){
    // Selection control structure: If else-if else ladder;
    //cout<<"This is tutorial 9";
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if((age<18) && (age>1)){
        cout<<"You are not allowed to the party"<<endl;
    }
    else if(age==18){
        cout<<"Then you will get an kid pass"<<endl;
    }
    else if(age<1){
        cout<<"You are not yet born"<<endl;
    }
    else{
        cout<<"You are allowed to the party"<<endl;
    }


    //Selection control structure: Switch Case statements
    switch(age)
    
        {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 1:
        cout<<"You are 1"<<endl;
        break;
    case 33:
        cout<<"You are 33"<<endl;
        break;
    
    default:
    cout<<"No special cases"<<endl;
        break;
    }
    cout<<"Done with switch case";
    return 0;
}