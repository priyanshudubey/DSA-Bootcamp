#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
	int i;
    for(i=0;i<n;i++)
    {
        int min_idx = i;
        for(int j=i+1;j<n;j++)
            if(arr[j]<arr[min_idx])
                min_idx = j;
         swap(arr[min_idx], arr[i]);
     }
}

int main(){
	int arr[] = {10,8,82,9,128,5};
	selectionSort(arr, 6);
	for(int i=0;i<6;i++)
		cout<<arr[i]<<" ";
	return 0;
}