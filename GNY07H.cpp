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

	ll i,j,k,len,n,sum,count;
	string str;

	ll f[100]; // number of ways to place tiles of 2X1 in domino of size 4XN
	ll g[100]; // number of ways to place tiles of 2X1 in domino of size 4XN with last column having 2 tiles at corner
	ll h[100];// number of ways to place tiles of 2X1 in domino of size 4XN with last column having 2 tiles at middle

	f[1]=1;
	f[2]=5;
	g[1]=1;
	g[2]=2;
	h[1]=1;
	h[2]=1;

	for(i=3;i<31;i++)
	{
		f[i]=f[i-1]+f[i-2]+2*g[i-1]+h[i-1];
		g[i]=f[i-1]+g[i-1];
		h[i]=f[i-1]+h[i-2];
	}
	int t;
	cin >> t;
	count=1;
	while(t--)
	{
		cin >> n;
		cout << count++ << " " << f[n] << endl;
	}


	return 0;
}
