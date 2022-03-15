#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
     int key,j;
     for(int i=1;i<n;i++)
      {
            key = arr[i];
            j = i-1;
            while(j >= 0 && arr[j] > key)
            {
                arr[j+1] = arr[j];
                j=j-1;
            }
             arr[j+1] = key;
       }
}

int main(){
    int arr[] = {10,8,82,9,128,5};
	insertionSort(arr, 6);
	for(int i=0;i<6;i++)
		cout<<arr[i]<<" ";
	return 0;
}