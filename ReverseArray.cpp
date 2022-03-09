#include<bits/stdc++.h>
using namespace std;

int ReverseArray(int arr[], int n){
	int start = 0, end = n-1;
	while(start<end){
		int t = arr[start];
		arr[start] = arr[end];
		arr[end] = t;
		start++;
		end--;
	}
	return 0;
}

int main(){
	int arr[] = {10,8,0,0,128,0};
	ReverseArray(arr, 6);
	for(int i=0;i<6;i++)
		cout<<arr[i]<<" ";
	return 0;
}