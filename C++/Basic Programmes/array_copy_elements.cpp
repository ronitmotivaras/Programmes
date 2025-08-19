#include<iostream>
using namespace std;

//copy all element of array into 2nd array

int main()
{
    int arr[] = {1, 5, 3, 90, 7, 54};
    int size = sizeof(arr)/sizeof(arr[0]);

    int arr2[size];

    for(int i=0; i<size; i++){
        arr2[i]=arr[i];
    }

    for(int i=0; i<size; i++){
        cout<<arr2[i]<<endl;
    }
    return 0;
}