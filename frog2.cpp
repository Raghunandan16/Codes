#include <bits/stdc++.h>
using namespace std;
const int n= 1e5+10;
int k;
int h[n];
int dp[n];
int fun(int i){
	if(i==0) return 0;
	if(dp[i]!=-1) return dp[i];
	int cost = INT_MAX;
	for (int j = 1; j <= k; ++j)
	{
		if(i-j>=0){
			cost=min(cost,fun(i-j)+abs(h[i]-h[i-j]));
		}
	}
	return dp[i]=cost;
}
int main(){
    memset(dp,-1,sizeof(dp));
	int n;
	cin>>n>>k;
	for (int i = 0; i < n; ++i)
	{
		cin>>h[i];
	}
	cout<<fun(n-1);
}