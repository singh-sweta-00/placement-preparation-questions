//Q2 ClassWork
/*Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.*/


#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n,i,j;
	cout<<"n & m =";
	cin>>n>>m;
	int arr[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int cnt=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(arr[i][j]<0){
				cnt++;
			}
		}
	}
	cout<<cnt;
}

