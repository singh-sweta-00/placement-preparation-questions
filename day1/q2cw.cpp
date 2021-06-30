//Q2ClassWork

#include<bits/stdc++.h>
using namespace std;
 int main(){
 	int n,i,j,key;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"key=";
	cin>>key;
	if(n==0||n==1)
		return n;
	for(i=0,j=n-1;i<=j;i++){
		while(arr[j]==key){
			j--;
		}
		if(arr[i]==key){
			swap(arr[i],arr[j]);
			j--;
		}
		
	}
	
	cout<<j+1;
	/*
	for(i=0;i<n;i++){
		cout<<arr[i];
	}
	cout<<"\n"<<"i="<<i<<"	"<<"j="<<j<<"\n";
	for(int k=0;k<j+1;k++){
		cout<<arr[k];
	}*/
 }
