#include<iostream>
using namespace std;
int main()
{    
    int age;
    cout<<"enter your age - ";
    cin>>age;
    if((age<18) &&(age>0))
    {
        cout<<" you can't come to party"<<endl;
    }
    else if (age==18)
    {
        cout<<"you are kid ypu will get kids pass "<<endl;
    }
    else if (age<1)
    {
        cout<<"you are not yet born";
    }
    
    else
    {
        cout<<"you can come to party ";
    }
} 