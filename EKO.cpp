#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

bool isValid(ll arr[],ll n,ll mid,ll m){
	ll sum=0;
	ll count=0;

	for(int i=0;i<n;i++){
		if(arr[i]-mid>0){
			sum+=(arr[i]-mid);
			if(sum>=m){
				return true;
			}
		}
	}
	return false;
}

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
	ll t;
	ll m;

	cin >> n >>m;

	ll arr[n];
	ll low=0;
	ll high=0;
	for(i=0;i<n;i++){
		cin >> arr[i];
		high+=arr[i];
	}
	ll ans=0;
	while(low<=high){
		ll mid=(low+high)/2; // mid represents how much height i will keep
		if(isValid(arr,n,mid,m)){
			ans=mid;
			low=mid+1;
		}else{
			high=mid-1;
		}
	}

	cout << ans << endl;

	return 0;
}
