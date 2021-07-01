//Q2 ClassWork

#include<bits/stdc++.h> 
#include<algorithm> 
using namespace std;

int main(){
	int n,m,i,j;
	cout<<"n=";
	cin>>n;
	int arr1[n];
	for(i=0;i<n;i++){
			cin>>arr1[i];
	}
	cout<<"m=";
	cin>>m;
	int arr2[m];
	for(i=0;i<m;i++){
			cin>>arr2[i];
	}
	if(n>m){
		cout<<"\n"<<"***********UNION***********"<<"\n";
		int k,index;
		k=m+n;
		int un[k];
		for(i=0;i<n;i++){
			un[i]=arr1[i];
		}
		index=i;
		for(i=0;i<m;i++){
			for(j=0;j<index;j++){
				if(arr2[i]!=un[j]){
					un[index]=arr2[i];
					index++;
				}
			}
		}
		for(i=0;i<index;i++){
			cout<<un[i];
		}
	}
		if(m>n){
		cout<<"\n"<<"***********UNION***********"<<"\n";
		int k,index;
		k=m+n;
		int un[k];
		for(i=0;i<n;i++){
			un[i]=arr1[i];
		}
		index=i;
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				if(arr2[i]!=arr1[j]){
					un[index]=arr2[i];
					index++;
				}
			}
		}
		for(i=0;i<index;i++){
			cout<<un[i];
		}
	}
	return 0;
}

