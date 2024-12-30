#include<iostream>
using namespace std;

int linearSearch(int n,int arr[], int key);

int main(){
    int n;
    cout<<"enter n :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"array of "<<n<<" elements is :"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter key :"<<endl;
    cin>>key;

    cout<<linearSearch(n,arr,key);
    
    return 0;
}
int linearSearch(int n,int arr[], int key){
    for(int i =0; i<n; i++){
        if(arr[i]==key){
            cout<<"matched and index is :"<<endl;
            return i;
        }
    }return -1;
}
   