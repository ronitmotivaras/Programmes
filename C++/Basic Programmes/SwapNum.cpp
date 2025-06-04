#include<iostream>
using namespace std;

//Swap Number with 3rd variabel

int main()
{
    int num1,num2;
    cout<<"Enter 2 Nums : ";
    cin>>num1>>num2;

    int temp =num1;
    num1=num2;
    num2=temp;

    cout<<"After Swapping \nNum 1 : "<<num1<<endl;
    cout<<"Num 2 : "<<num2;
    return 0;
}