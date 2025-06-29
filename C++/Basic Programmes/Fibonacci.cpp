#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int n1=0,n2=1,tot=0;

    for(int i=1; i<=n; i++){
        tot=n1+n2;
        n1=n2;
        n2=tot;
        cout<<tot<<" ";
    }
    return 0;
}