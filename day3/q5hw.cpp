//Q5 HomeWork

/*Given two arrays of integers nums and index. Your task is to create target array under the following rules:

Initially target array is empty.
From left to right read nums[i] and index[i], insert at index index[i] the value nums[i] in target array.
Repeat the previous step until there are no elements to read in nums and index.
Return the target array.

It is guaranteed that the insertion operations will be valid.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int nums[n],index[n];
	vector<int>target (n);
	int i;
	for(i=0;i<n;i++){
		cin>>nums[i];
	}
	for(i=0;i<n;i++){
		cin>>index[i];
	}
	for(i=0;i<n;i++){
		vector<int> :: iterator it = target.begin();
                target.insert((it+index[i]), nums[i]);
	}
	for(i=0;i<n;i++){
		cout<<target[i]<<" ";
	}
}
