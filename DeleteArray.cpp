#include<bits/stdc++.h>
using namespace std;

int DeleteArray(int arr[], int n, int x){
	int i;
	for(i=0;i<n;i++)
		if(arr[i]==x)
			break;
	if(i==n)
		return n;
		//return arr
	for(int j=i;j<n-1;j++)
		arr[j] = arr[j+1];
	return (n-1);
	//return arr;
}

int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int x = 5, n=10;
	cout<<DeleteArray(arr,n,x);
	// for(int i=0;i<n-1;i++)
	//  	cout<<arr[i]<<endl;
	return 0;
}