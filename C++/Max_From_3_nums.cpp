#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter 3 Numbers : ";
    cin>>a>>b>>c;

    if(a<b){
        if(b<c){
            cout<<"C is Big";
        }
        else{
            cout<<"B is Big";
        }
    }
    else{
        if(a<c){
            cout<<"C is Big";
        }else{
            cout<<"A is Big";
        }
    }
    return 0;
}