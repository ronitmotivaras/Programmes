#include<iostream>
using namespace std;

int main()
{
    int num,fact=1;
    cout<<"Enter Number : ";
    cin>>num;
    for(int i=1;i<=num;i++){
        fact = fact*i;
    }
    cout<<"Factorial is : "<<fact;
    return 0;
}