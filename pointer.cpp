#include<iostream>
using namespace std;

int main(){
    int a=4;
    int*ptr= &a;
    cout<<"address at a ="<<&ptr<<endl;
    cout<<"address at a ="<<&a<<endl;
    return 0;
}