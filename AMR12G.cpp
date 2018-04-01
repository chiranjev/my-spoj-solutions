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
		cin >> m >> n >> k;
		char c;
		int arr[m]; // contains number of bulbs lit in each array
		memset(arr,0,sizeof(arr));
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				cin >> c;

				if(c=='*'){
					arr[i]++;
				}
			}
		}

		sort(arr,arr+m);
		int idx=0;
		while(k>0&&idx<m&&n-arr[idx]>arr[idx]){
			arr[idx]=n-arr[idx];
			k--;
			idx++;
		}
		if(k>0&&k%2==1){
			sort(arr,arr+m);
			arr[0]=n-arr[0];
		}
		cout << accumulate(arr,arr+m,0) << endl;
	}


	return 0;
}
