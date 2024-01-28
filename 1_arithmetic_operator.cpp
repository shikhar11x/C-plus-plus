#include<iostream>
using namespace std;
int main()
{
    cout<<"arithmetic operators in c++"<<endl;
    int a,b;
    cout<<"enter first no"<<endl;
    cin>>a;
    cout<<"enter first no"<<endl;
    cin>>b;

    cout<<"the a+b is "<< a+b<<endl;
    cout<<"the a-b is "<< a-b<<endl;
    cout<<"the a*b is "<< a*b<<endl;
    cout<<"the a/b is "<< (float)a/b<<endl;
    cout<<"the a%b is "<<a%b<<endl;
    cout<<"the a++ is "<< a++<<endl;    /* first print a then add 1 in value of a  */
    cout<<"the a-- is "<<a--<<endl;     /*first print a then reduce 1  in value of a */
    cout<<"the ++a is "<<++a<<endl;     /*first add 1 a then print  value of a */
    cout<<"the --a is "<<--a<<endl;     /*first reduce  1 a then print  value of a*/
}
