#include<iostream>
#include<algorithm>
using namespace std;

//sort 

int main()
{
    int arr[] = {1,30,2,5,7,90,8};

    int max=arr[0],sec_max=arr[0];

    sort(arr,arr + 7);

    cout<<arr[7-2];

    // cout<<"Second Max In Array : "<<sec_max;
    return 0;
}