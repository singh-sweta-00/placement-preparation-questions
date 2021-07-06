//Q4 ClassWork
/*There is a hidden integer array arr that consists of n non-negative integers.

It was encoded into another integer array encoded of length n - 1, such that encoded[i] = arr[i] XOR arr[i + 1]. For example, if arr = [1,0,2,1], then encoded = [1,2,3].

You are given the encoded array. You are also given an integer first, that is the first element of arr, i.e. arr[0].

Return the original array arr. It can be proved that the answer exists and is unique.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,f,temp;
	vector<int> encoded;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>temp;
		encoded.push_back(temp);
	}
	int k;
	k=n+1;
	int arr[k];
	cout<<"\nf=";
	cin>>f;
	arr[0]=f;
	
	for(i=0;i<n;i++){
		arr[i+1]=arr[i]^encoded[i];
	}
	
	for(i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

