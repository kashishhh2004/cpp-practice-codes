#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"enter rows:"<<endl;
    cin>>rows;
    int i;
    for(i=1; i<=rows; ++i){
        for(int j=1; j<=i; ++j){
            cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}