//Q1 ClassWork

#include<bits/stdc++.h> 
#include<algorithm> 
using namespace std;

int main(){
	int n,m,i,j,cust,sum,max;
	cout<<"n=";
	cin>>n;
	cout<<"m=";
	cin>>m;
	vector<vector<int> > accounts(n,vector<int>(m));
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			cin>>accounts[i][j];
	}
	for(i=0;i<n;i++){
		sum=0;
		for(j=0;j<m;j++){
			sum+=accounts[i][j];
		}
	
		if(sum>max){
			max=sum;
			cust=i+1;
		}
	
	}
	
	cout<<"customer "<<cust<<" is richest";
}

