//Q1 ClassWork
/*Given a m * n matrix of distinct numbers, return all lucky numbers in the matrix in any order.

A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n][n],i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	int max=INT_MIN,min=INT_MAX,k;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr[i][j]<min){
				min=arr[i][j];
				k=j;
			}
		}
		for(j=0;j<n;j++){
			if(arr[j][k]>max)
				max=arr[j][k];
		}
		
	if(min==max){
		cout<<min;
		break;
	}
	}
}

