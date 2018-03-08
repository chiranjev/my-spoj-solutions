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
	ll t;
   cin >> str;
   while(str[0]!='0')
   {
      len=str.length();
      ll dp[len];
      dp[0]=1;
      for(i=1;i<len;i++)
      {
         if(i==1)
         {
            if(str[i-1]=='1'||str[i-1]=='2')
            {
               if(str[i]=='0')
               {
                  dp[i]=dp[i-1];
               }
               else if(str[i-1]=='2'&&(str[i]>'6'&&str[i]<='9'))
               {
                  dp[i]=dp[i-1];
               }
               else
               {
                  dp[i]=dp[i-1]+1;
               }

            }
            else
            {
               dp[i]=dp[i-1];
            }
         }
         else if(str[i]=='0')
         {
            dp[i]=dp[i-2];
         }
         else if(str[i-1]=='1'||str[i-1]=='2')
         {
            if(str[i]=='0')
            {
               dp[i]=dp[i-1];
            }
            else if(str[i-1]=='2'&&(str[i]>'6'&&str[i]<='9'))
            {
               dp[i]=dp[i-1];
            }
            else
            {
               dp[i]=dp[i-1]+dp[i-2];
            }
         }
         else
         {
            dp[i]=dp[i-1];
         }
      }
      cout << dp[len-1] << endl;
      // for(i=0;i<len;i++)
      //    cout << dp[i] << " ";
      // cout << endl;
      cin >> str;
   }


	return 0;
}
