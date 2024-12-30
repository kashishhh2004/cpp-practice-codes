#include<iostream>
using namespace std;
void swap(int*a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x;
    int y;
    cout<<"enter x:"<<endl;
    cin>>x;
    cout<<"enter y :"<<endl;
    cin>>y;
    swap(&x ,&y);
    cout<<"the value of x is:"<<x<<endl;
    cout<<"the value of y is:"<<y<<endl;                  
    
    
    return 0;
}