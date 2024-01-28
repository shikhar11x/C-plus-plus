#include<iostream>
using namespace std;
int main()
{   
    int a,b;
    cout<<"enter first no "<<endl;
    cin>>a;
    cout<<"enter second no "<<endl;
    cin>>b;
    cout<<"logical operators in c++"<<endl;
    cout<<"1. And operator (&&) "<<endl;
    cout<<"the value of a == b && (a<b) is : "<< ((a==b) && (a<b))<<endl;
    cout<<"2. Or operator (||) "<<endl;
    cout<<"the value of a == b || (a<b) is : "<< ((a==b) || (a<b))<<endl;
    cout<<"3. Not operator (!) "<<endl;
    cout<<"the value of  (!(a==b)) is : "<< (!(a==b))<<endl;
    }