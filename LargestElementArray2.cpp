#include<bits/stdc++.h>
using namespace std;

int getLarge(int arr[], int n){
	int res = 0;
	for(int i=0;i<n;i++)
		if(arr[i]>arr[res])
			res = i;
	return res;
}

int main(){
	int arr[] = {10,5,20,8,2,100,90,35};
	cout<<getLarge(arr,8);
	return 0;
}