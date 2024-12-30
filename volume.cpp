// USING FUNCTION OVERLOADING TO FIND THE VOLUME OF DIFFERENT OBJECTS

#include<iostream>
using namespace std;

int volume(double r,int h);         //volume of cylinder
int volume(int a);                  //volume of cube
int volume(int l, int b, int h);    //volume of cuboid


int main(){
    cout<<"the volume of cylinder of radius 3 and height 5 is :"<<volume(3,5)<<endl;
    cout<<"the volume of cube of side 8 is :"<<volume(8)<<endl;
    cout<<"the volume of cuboid of length 3, breadth 7 and height 5 is :"<<volume(3,7,5)<<endl;
    
    return 0;
}
int volume(double r,int h){
    return (3.14*r*r*h);
}
int volume(int a){
    return (a*a*a);
}
int volume(int l,int b,int h){
    return (l*b*h);
}