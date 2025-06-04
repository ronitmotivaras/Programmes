#include<iostream>
using namespace std;

//Basic Approcah

int main()
{
    int num;
    cout<<"Enter Number  : ";
    cin>>num;

    int count=0;

    for (int i=1; i <=num; i++){
        if(num%i==0)
            count++;
    }

    if(count<=2)
        cout<<"Number is Prime";
    else
        cout<<"Number is not Prime";
    return 0;
}