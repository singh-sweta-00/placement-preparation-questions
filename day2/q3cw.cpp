//Q3 ClassWork
/*Given the array candies and the integer extraCandies, where candies[i] represents the number of candies that the ith kid has.

For each kid check if there is a way to distribute extraCandies among the kids such that he or she can have the greatest number of candies among them. Notice that multiple kids can have the greatest number of candies.*/

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

