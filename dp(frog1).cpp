#include<bits/stdc++.h>
using namespace std;
#define mx 1000000
int h[mx];
int dp[mx],ret1=mx,ret2=mx;
int n;
int solve(int i)
{
    if(i==n)return 0;
    if(dp[i]!=-1)return dp[i];
    if(i+1<=n)ret1=abs(h[i]-h[i+1])+solve(i+1);
    if(i+2<=n)ret1=abs(h[i]-h[i+2])+solve(i+2);
    dp[i]=min(ret1,ret2);
    return dp[i];

}

int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)cin>>h[i];
   memset(dp,-1,sizeof(dp));
   cout<<solve(1) <<endl;

}

