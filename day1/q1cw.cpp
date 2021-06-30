//Q1 ClassWork

#include<bits/stdc++.h> 
using namespace std;

int main(){
	int n,i,j,k;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	if(n==0||n==1)
		return n;
	for(i=0,j=1;j<n;j++){
		if(arr[i]!=arr[j]){
			i++;
			arr[i]=arr[j];
		}
		
	}
	cout<<i+1;
}

