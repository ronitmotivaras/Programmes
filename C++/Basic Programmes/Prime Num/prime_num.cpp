#include<iostream>
using namespace std;

//college Wallah method

int main()
{
    int num;
    cout<<"Enter Number  : ";
    cin>>num;
    bool flag=true;

    for (int i=2; i <=num/2; i++){
        if(num%i==0)
            flag=false;
            break;
    }

    if(num==1)
        cout<<"Neither Prime Nor Composite";
    else if(flag==true){
        cout<<"Prime Number";
    }
    else
        cout<<"Composite";
    return 0;
}