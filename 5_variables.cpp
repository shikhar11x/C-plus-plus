#include<iostream>
using namespace std;
int c=10/* global variable */;
int main(){
    int a,b,c;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b : "<<endl;
    cin>>b;
    c= a+b;
    cout<<"the sun is "<< c<< endl;
    cout<<"the gobal c is "<< ::c ;/*:: is scope resolution operator*/

}