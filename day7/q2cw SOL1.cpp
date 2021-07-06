//Q2 ClassWork
/*You are given an m x n binary matrix mat of 1's (representing soldiers) and 0's (representing civilians). The soldiers are positioned in front of the civilians. That is, all the 1's will appear to the left of all the 0's in each row.

A row i is weaker than a row j if one of the following is true:

The number of soldiers in row i is less than the number of soldiers in row j.
Both rows have the same number of soldiers and i < j.
Return the indices of the k weakest rows in the matrix ordered from weakest to strongest.*/



//SOLUTION 1(NAIVE METHOD)
#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n,i,j;
	cout<<"n & m =";
	cin>>n>>m;
	int arr[n][m];
	vector<int> res(m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int cnt,k;
	cout<<"\nk=";
	cin>>k;
	for(i=0;i<n;i++){
		cnt=0;
		for(j=0;j<m;j++){
			cnt+=arr[i][j];
		}
		res[i]=cnt;
	}
	int p;
	while(k--){
		p=*min_element(res.begin(),res.end());
		for(i=0;i<n;i++){
			if(res[i]==p ){
				cout<<i<<" ";
				res[i]=INT_MAX;
				break;
			}		
	    }
	}
}

