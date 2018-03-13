#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif

	int i,j,k,len,n,sum,count;
	string str;
	int t;

	int dp[2001][2001];  // dp[i][j] refers to the maximum value if we can choose from first i items and knapsack size is j.
	int size[2001],value[2001];
	int s;
	memset(dp,0,sizeof(dp));
	cin >> s >> n;

	for(i=0;i<n;i++)
	{
		cin >> size[i] >> value[i];
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=s;j++)
		{
			if(size[i-1]<=j) // if value of current element is greater than the knapsack size, then don't take it
			{
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-size[i-1]]+value[i-1]);
			}
			else
			{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	cout << dp[n][s];


	return 0;
}
