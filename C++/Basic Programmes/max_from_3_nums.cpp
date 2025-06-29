#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 3 Numbers : ";
    cin>>a>>b>>c;

    if(a<b){
        if(b<c){
            cout<<"C is Max";
        }
        else{
            cout<<"B is Max";
        }
    }
    else
    {
        if(a<c){
            cout<<"C is Max";
        }
        else{
            cout<<"A is Max";
        }
    }
    return 0;
}