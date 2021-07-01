//Q3 ClassWork

#include<bits/stdc++.h>
using namespace std;

inline const char * const BoolToString(bool b)
{
  return b ? "true" : "false";
}

int main(){
	int n,extra,max,i;
	cin>>n;
	int kids[n];
	bool res[n];
	for(i=0;i<n;i++){
			cin>>kids[i];
	}
	cout<<"extra toffes=";
	cin>>extra;
	max = *max_element(kids, kids + n);
	for(i=0;i<n;i++){
		if(kids[i]+extra>=max){
			res[i]=true;
		}
		else{
			res[i]=false;
		}
	}
	for(i=0;i<n;i++){
		cout<<BoolToString(res[i])<<"	";
	}
	return 0;
}

