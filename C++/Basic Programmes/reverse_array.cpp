#include<iostream>
using namespace std;

int main()
{
    int arr[]= {1,7,5,20,3,95,6};

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        for(int j=i+1; j<size; j++){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }

    for(int i=0;i<size; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}