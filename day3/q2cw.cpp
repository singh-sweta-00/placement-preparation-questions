//Q2 ClassWork
/*Given a string s and an integer array indices of the same length.

The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string.

Return the shuffled string.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i;
	cin>>n;
	int arr[n];
	string st[n],res[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		cin>>st[i];
	}
	for(i=0;i<n;i++){
		res[arr[i]]=st[i];
	}
	for(i=0;i<n;i++){
		cout<<res[i]<<" ";
	}
}
