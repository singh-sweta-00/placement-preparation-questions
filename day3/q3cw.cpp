//Q3 ClassWork
/*We are given a list nums of integers representing a list compressed with run-length encoding.

Consider each adjacent pair of elements [freq, val] = [nums[2*i], nums[2*i+1]] (with i >= 0).  For each such pair, there are freq elements with value val concatenated in a sublist. Concatenate all the sublists from left to right to generate the decompressed list.

Return the decompressed list.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,req,val,freq;
	cin>>n;
	int arr[n];
	vector<int> res;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		freq=arr[2*i];
		val=arr[2*i+1];
		while(freq>0){
			res.push_back(val);
			freq--;
		}
	}
	for(i=0;i<n;i++){
		cout<<res[i]<<" ";
	}
}
