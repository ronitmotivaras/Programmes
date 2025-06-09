#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    
    int rem,num=0;
    while(n>0){
        rem = n%10;
        num *=10;
        num +=rem;
        n /=10;
    }

    cout<<"Reverse Number : "<<num;
    return 0;
}