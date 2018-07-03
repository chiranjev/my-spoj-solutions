#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

ll res = 0;

ll dfs(vector<pair<int,int> > adj[],vector<int> &visited,vector<int> &count,int n,int v){

	visited[v] = 1;

	for(int i=0;i<adj[v].size();i++){
		int u = adj[v][i].first;
		if(visited[u]==1){
			continue;
		}
		dfs(adj,visited,count,n,u);
		res+=(min(count[u],n-count[u])*2*adj[v][i].second);
		count[v]+=count[u];
	}
	return res;

}

int main(){
	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif

	int i,j,k,len,n,sum,cnt;
	string str;
	ll t;
	ll x,y,w;

	cin >> t;
	cnt = 1;
	while(t--){

		cin >> n;
		res = 0;
		vector<pair<int,int> > adj[n];
		vector<int> visited(n,0);
		vector<int> count(n,1);
		for(i=0;i<n-1;i++){
			cin >> x >> y >> w;
			adj[x-1].push_back(make_pair(y-1,w));
			adj[y-1].push_back(make_pair(x-1,w));

		}

		cout << "Case #" << cnt++ << ": " << dfs(adj,visited,count,n,0) << endl;

	}


	return 0;
}
