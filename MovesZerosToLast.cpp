#include<bits/stdc++.h>
using namespace std;

int MoveZerorsToEnd(int arr[], int n){
	int count = 0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			swap(arr[i],arr[count]);
			count++;
		}
	}
	return 0;
}

int main(){
	int arr[] = {10,8,0,0,128,0};
	MoveZerorsToEnd(arr, 6);
	for(int i=0;i<6;i++)
		cout<<arr[i]<<" ";
	return 0;
}