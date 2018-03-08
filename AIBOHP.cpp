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

	while(t--)
	{
		cin >> str;
		string rev=str;
		reverse(rev.begin(),rev.end());
		len=str.length();
		int dp[len+1][len+1];
		memset(dp,0,sizeof(dp));

		for(i=1;i<=len;i++)
		{
			for(j=1;j<=len;j++)
			{
				if(str[i-1]==rev[j-1])
				{
					dp[i][j]=dp[i-1][j-1]+1;
				}
				else
				{
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				}
			}
		}

		cout << len-dp[len][len] << endl;
	}


	return 0;
}
