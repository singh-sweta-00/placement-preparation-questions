//Q1 ClassWork
/*Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

Return the answer in an array.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,l,c;
	vector <int> v1;
	vector <int> v2;
	while(cin>>n){
		v1.push_back(n);
	}
	l=v1.size();
	for(i=0;i<l;i++){
		c=0;
		for(j=0;j<l;j++){
			if(j!=i&&v1[j]<v1[i]){
				c++;
			}
		}
		v2.push_back(c);
	}
	for(j=0;j<v2.size();j++){
			cout<<v2[j]<<" ";
		}
	
}
