#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter 2 Nums : ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After Swapping \nA : "<<a<<"\nB : "<<b;
    return 0;
}