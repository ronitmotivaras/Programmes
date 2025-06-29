#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter Number : ";
    cin>>num;

    int rem,sum=0;

    while(num>0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    cout<<"Sum of Number is : "<<sum;
    return 0;
}