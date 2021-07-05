//Q1 ClassWork
 /*You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i???????????th???? customer has in the j???????????th???? bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.*/

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

