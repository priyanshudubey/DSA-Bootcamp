#include<bits/stdc++.h>
using namespace std;

int getLarge(int arr[], int n){
	for(int i=0;i<n;i++){
		bool flag = true;
		for(int j=0;j<n;j++){
			if(arr[j]>arr[i]){
				flag = false;
				break;
			}
		}
		if(flag==true)
			return i;
	}
	return -1;
}

int main(){
	int arr[] = {10,5,20,8,2,100,90,35};
	cout<<getLarge(arr,8);
	return 0;
}