#include <bits/stdc++.h> 
int maximum(int arr[],int n){
	int maxi =arr[0];
	for(int i = 0 ; i<n ; i++){
          if (arr[i] > maxi) {
            maxi = arr[i];
          }
        }
        return maxi;
}

int minimum(int arr[], int n){
	int mini = arr[0];
	for(int i = 0 ; i<n ; i++){
                        if (arr[i] < mini) {
                                mini = arr[i];
                        }
        }
        return mini;
}
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
	int sum= 0 ;
	sum = maximum(arr,n) + minimum(arr,n);
	return sum;
}
