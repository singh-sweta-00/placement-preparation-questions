//Q3 ClassWork

#include<bits/stdc++.h> 
using namespace std;

int main(){
	int n,i,j,k=0;
	cout<<"n(must be even)= ";
	cin>>n;
	int arr[n],res[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	if(n==0||n==1)
		return n;
	for(i=0,j=n/2;i<n/2;i++,j++){
		res[k]=arr[i];
		res[k+1]=arr[j];
		k=k+2;
	}
	for(i=0;i<n;i++){
		cout<<res[i];
	}
}
