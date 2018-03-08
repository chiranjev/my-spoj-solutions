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

	cin >> t;
	int h,w;
	while(t--)
	{
		cin >> h >> w;

		int arr[h][w];
		int dp[h][w];

		for(i=0;i<h;i++)
		{
			for(j=0;j<w;j++)
			{
				cin >> arr[i][j];
				if(i==0)
					dp[i][j]=arr[i][j];
			}
		}

		for(i=1;i<h;i++)
		{
			for(j=0;j<w;j++)
			{
				int temp=-1;
				if(j-1>=0)
					temp=max(temp,dp[i-1][j-1]);
				if(j+1<w)
					temp=max(temp,dp[i-1][j+1]);
				temp=max(temp,dp[i-1][j]);
				dp[i][j]=temp+arr[i][j];
			}
		}
		int ans=-1;
		for(i=0;i<w;i++)
		{
			ans=max(ans,dp[h-1][i]);
		}

		// for(i=0;i<h;i++)
		// {
		// 	for(j=0;j<w;j++)
		// 		cout << dp[i][j] << " ";
		// 	cout << endl;
		// }

		cout << ans << endl;

	}


	return 0;
}
