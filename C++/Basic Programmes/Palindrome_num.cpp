#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int num=n;
    int rem,rev=0;
    while(num>0){
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
        
    if(rev==n)
        cout<<"Palindorm Num";
    else
        cout<<"Not a Palindorm Num";
    return 0;
}