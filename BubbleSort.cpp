#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1;j++)
			if(arr[j] > arr[j+1])
				swap(arr[j], arr[j+1]);
}
int main(){
	int arr[] = {10,8,82,9,128,5};
	bubbleSort(arr, 6);
	for(int i=0;i<6;i++)
		cout<<arr[i]<<" ";
	return 0;
}