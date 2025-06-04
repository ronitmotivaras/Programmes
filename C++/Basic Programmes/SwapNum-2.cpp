#include<iostream>
using namespace std;

//Swap Number without 3rd variabel

int main()
{
    int a,b;
    cout<<"Enter 2 Nums : ";
    cin>>a>>b;

    a=a+b;
    b=a-b;
    a=a-b;    

    cout<<"After Swapping \nNum 1 : "<<a<<endl;
    cout<<"Num 2 : "<<b;
    return 0;
}