#include<iostream>
using namespace std;
int product(int a,int b);

int main(){
    int x;
    int y;
    cout<<"enter x:"<<endl;
    cin>>x;
    cout<<"enter y:"<<endl;
    cin>>y;
    cout<<"the product is :"<<product(x,y);
    
    return 0;
}
int product(int a,int b){
    int c;
    c= a*b;
    return c;
}