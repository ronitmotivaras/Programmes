#include<iostream>
using namespace std;

int main()
{
    int a,b;
    //Swap Number without using 3rd variable
    cout<<"Enter 2 Nums : ";
    cin>>a>>b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"After Swapping \nA : "<<a<<"\nB : "<<b;
    return 0;
}