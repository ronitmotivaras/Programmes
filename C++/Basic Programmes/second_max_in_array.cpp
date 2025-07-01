#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,30,2,5,7,90,8};

    int max=arr[0],sec_max=arr[0];

    for(int i=0; i<7; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }

    for(int i=0; i<7;i++){
        if(arr[i]>sec_max && arr[i]!=max){
            sec_max=arr[i];
        }
    }

    cout<<"Second Max In Array : "<<sec_max;
    return 0;
}