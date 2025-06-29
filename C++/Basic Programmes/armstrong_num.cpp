#include<iostream>
using namespace std;

//2nd Approcah

int main()
{
    int n;
    cout<<"Enter Number  : ";
    cin>>n;
        int rem,sum=0;
        int num;
        num=n;

        while(num>0){
            rem=num%10;
            sum=sum+(rem*rem*rem);
            num=num/10;
        }
        if(n==sum)
            cout<<"Number is Armstring";
        else
            cout<<"Not a Armstring Number";
    return 0;
}