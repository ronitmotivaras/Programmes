#include<iostream>
using namespace std;

//2nd Approcah

int main()
{
    int num;
    cout<<"Enter Number  : ";
    cin>>num;

    int count=0;

    for (int i=2; i <=num; i++){
        if(num%i==0)
            count++;
    }

    if(count==1)
        cout<<"Prime Number";
    else
        cout<<"Not a Prime Number";
    return 0;
}