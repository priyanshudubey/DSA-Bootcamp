#include<iostream>
using namespace std;

int SearchUnsortedArray(int arr[], int n, int x){
	int i;
	for(i = 0;i<n;i++)
		if(arr[i]==x)
			return i+1;
	return 0;
}

int main(void){
	int arr[12] = {1,2,3,4,5,6,7,8,9,10, 11, 12 ,13};
	int x = 2, n=10;
	cout<<SearchUnsortedArray(arr,n,x);
	return 0;
}