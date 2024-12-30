#include<iostream>
using namespace std;

int sum(int a,int b); //function prototype

int main(){
    int num1;
    int num2;
    cout<<"enter num1 :"<<endl;
    cin>>num1;

    cout<<"enter num2 :"<<endl;
    cin>>num2;

    cout<<"the sum is :"<<sum(num1,num2)<<endl; // function call

    return 0;
}
int sum(int a,int b){ //function definition
    int c = a+b;
    return c;
}