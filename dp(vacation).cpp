#include<bits/stdc++.h>
using namespace std;
#define mx 1000000
int h[mx][4];
int dp[mx][4],ret1=mx,ret2=mx;
int n;
int solve(int i,int ft)
{
   if(i>n)return 0;
   if(dp[i][ft]!=-1)return  dp[i][ft];
    int ret=0;
   for(int j=1;j<=3;j++)
   {

       if(j!=ft)
       {
           ret=max(ret,h[i][j]+solve(i+1,j));
       }
   }
    return dp[i][ft]=ret;
}

int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=3;j++)
        cin>>h[i][j];
   }
   memset(dp,-1,sizeof(dp));
   cout<<solve(1,0) <<endl;

}


