#include<iostream>
#include<algorithm>
using namespace std;

//sort & compare with max

int main()
{
    int arr[] = {1,30,2,5,7,90,8};

    int size = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr + 7);
    
    int max=arr[size-1],sec_max=arr[0];

    for(int i=size-2;i>=0;i++){
        if(arr[i]<max){
            sec_max=arr[i];
            break;
        }
    }

    cout<<"Second Max Value In Array : "<<sec_max;
    
    return 0;
}