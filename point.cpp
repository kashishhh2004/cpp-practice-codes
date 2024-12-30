#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int *b = &a;
    int **c= &b;
    
    cout<<"value of b is "<<&b<<endl;
    cout<<"value of b is "<<c<<endl;
    cout<<"value at address c is "<<*c<<endl;
    cout<<"value at address value_at(value_at(c)) is "<<**c<<endl;
    
    return 0;
}