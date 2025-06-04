#include<iostream>
using namespace std;

//2nd Approcah

int main()
{
    int num;
    cout<<"Enter Number  : ";
    cin>>num;

    int sum=0;

    for(int i=1;i<=num;i++){
        sum += i;
    }

    cout<<"Sum of All Numbers In range : "<<sum;
    return 0;
}