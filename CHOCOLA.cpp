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
	int m;

	cin >> t;

	while(t--)
	{
		cin >> m >> n;

		vector<int> yarr(m-1);
		vector<int> xarr(n-1);
		int ans=0;
		for(i=0;i<m-1;i++)
			cin >> yarr[i];
		for(i=0;i<n-1;i++)
			cin >> xarr[i];
		sort(xarr.begin(),xarr.end());
		reverse(xarr.begin(),xarr.end());

		sort(yarr.begin(),yarr.end());
		reverse(yarr.begin(),yarr.end());

		// for(i=0;i<m-1;i++)
		// 	cout << yarr[i] << " ";
		//
		// 	cout << endl;
		// for(i=0;i<n-1;i++)
		// 	cout << xarr[i] << " ";


		for(i=0,j=0;i<n-1&&j<m-1;)
		{
			if(xarr[i]>=yarr[j])
			{
				ans=ans+xarr[i]*(j+1);
				i++;
			}
			else if(xarr[i]<yarr[j])
			{
				ans=ans+yarr[j]*(i+1);
				j++;
			}
		}
		while(i<n-1)
		{
			ans=ans+xarr[i]*(j+1);
			i++;
		}
		while(j<m-1)
		{
			ans=ans+yarr[j]*(i+1);
			j++;
		}

		cout << ans << endl;
	}


	return 0;
}
