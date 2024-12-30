#include<iostream>
using namespace std;
int fact(int n);

int main(){
    int n;
    
    cout<<"enter n :"<<endl;
    cin>>n;
    cout<<"factorial is :"<<fact(n)<<endl;

    return 0;
}
int fact(int n){
if (n==0){         //base case necessary
    return 1;
}
  int factNminus1 = fact(n-1);
  int factN = factNminus1*n;
  return factN;

}