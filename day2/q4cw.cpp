//Q4 ClassWork
/*Given an array of integers nums.

A pair (i,j) is called good if nums[i] == nums[j] and i < j.

Return the number of good pairs.*/

#include<bits/stdc++.h> 
using namespace std;

int main(){
	int n,i,j,good=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
			cin>>arr[i];
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]&&i<j){
				good++;
			}
		}
	}
	cout<<good;
	return 0;
}

