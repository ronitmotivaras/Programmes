#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter Number :";
    cin>>num;

    if(num%2==0)
        cout<<"Even Number";
    else
        cout<<"Odd Number";
        
    return 0;
}

/*
        Odd - Even Check Condiotions

    num % 2 == 0 => E-O
    num % 2 != 0 => O-E
    Num % 2 == 1 => O-E
    Num % 2 != 1 => E-O
*/