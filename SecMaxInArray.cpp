#include<iostream>
using namespace std;
int main(){
	int arr[]={1,50,222,333,40,5};
	int fm=arr[0],sm=0;
	for(int i=0;i<=5;i++){
		if(arr[i]>fm)
			fm=arr[i];
	}
	for(int i=0;i<=5;i++){
		if(arr[i]!=fm && arr[i]>sm)
			sm=arr[i];	
	}
	cout<<"first max "<<fm<<endl;
	cout<<"second max "<<sm;
}
