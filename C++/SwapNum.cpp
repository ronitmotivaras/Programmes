#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 2 Nubers : ";
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"After Swapping\nA : "<<a<<"\nB : "<<b;
    return 0;
}