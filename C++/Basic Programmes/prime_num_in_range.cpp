#include<iostream>
using namespace std;

int main()
{
    int range;
    cout<<"Enter Range : ";
    cin>>range;
    
    for(int i=2;i<=range;i++)
    {
        bool flag=false;
    
        if(range<2){
            cout<<"Not a Prime Number";
        }

        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag=true;
                break;
            }
        }

        if(!flag){
            cout<<i<<" ";
        }
    }
    
    return 0;
}