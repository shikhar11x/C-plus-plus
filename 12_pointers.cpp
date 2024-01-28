#include<iostream>
using namespace std;

int main(){
    // *** POINTERS ---->> Data type which hold the address of other datatypes ***
    int a=3;
    int * b= &a;
 
    // &__ --->> address of operator
    // *__ --->> dereferencing  operator(value at given address)

   cout<<"the address of a is "<<b<<endl;
   cout<<"the address of a is "<<&a<<endl;
   cout<<"the value at address  b is "<<*b<<endl<<endl;

   //  Pointer to pointer
   cout<<"*** pointer to pointer ***"<<endl<<endl;

   int ** c =&b;  
   cout<<"the address of b is "<<&b<<endl;
   cout<<"the address of b is "<<c<<endl;
   cout<<"the value at address of c is "<<*c<<endl;
   cout<<"the value at address value at(value at(c)) is "<<**c<<endl;

}