#include<iostream>

using namespace std;
int main(){
    // ****** Switch Case ******
    int age;
    cout<<"enter your age - ";
    cin>>age;

    switch (age)
    { 
    case 17 :
        cout<<"wait !! next year you can vote ";
        break;

    case 18 :
        cout<<"you can vote";
        break;
    
    default:
        cout<<"if you are 18 or more then you can only vote";
        break;
    }
}