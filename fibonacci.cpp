#include<iostream>
using namespace std;

int fib(int n);

int main(){
    int n;
    cout<<"enter n :"<<endl;
    cin>>n;
    cout<<"At position "<<n<<", the term is :"<<fib(n);
    
    return 0;
}
int fib(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
}