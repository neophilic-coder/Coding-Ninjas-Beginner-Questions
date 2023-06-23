#include <bits/stdc++.h> 
const int M=1e9+7;
long long int sumOrProduct(long long int n, long long int q)
{
	long long int sum = 0;
	long long int product = 1;
	if(q==1){
		for(int i = 1; i <=n; i++){
			sum = sum + i;
			
		}
		return sum;
	}
	if(q==2){
		for(int i = 1; i <=n; i++){
			product = (product*i)%M;
		}
		return product;
	}
	
}
