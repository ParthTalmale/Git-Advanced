#include<iostream>

using namespace std;


int main()
{
    int num1,num2;
    cout<<"Calculator Options: "<< endl;
    cout<<"1.Add"<<endl;
    int choice;
    cin>>choice;
    
    switch(choice){
        case 1:
        int res = num1  + num2;
        cout<<"Addition Result: "<<res<<endl;
        break;
        case 2:
        int res = num1  - num2;
        cout<<"Subtraction Result: "<<res<<endl;
        break;
        

    }

    return 0;
}