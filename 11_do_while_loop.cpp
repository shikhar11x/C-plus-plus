#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the no : ";
    cin>>n;
    // *** Do While loop ***
    i=1;   
    do 
    {
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
    i++;
    }while (i<=10);
    
}