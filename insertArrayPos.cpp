#include<iostream>
using namespace std;

int* insertArray(int arr[], int n, int x, int posn){
	for(int i=n;i>=posn;i--){
		arr[i] = arr[i-1];
	}
	arr[posn-1] = x;
	return arr;
}

int main(){
	int arr[100]={0};
	int x=8,pos=4,n=10;
	for(int i=0;i<10;i++)
		arr[i] = i+1;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"--";

	insertArray(arr, n, x, pos);

	for(int i=0;i<n+1;i++)
		cout<<"Updated one"<<endl<<arr[i]<<"--";

	return 0;
}