#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
int v[100],cnt=0;
void dfs(int i);
int main()
{
    int n,m;
    cin>>n>>m;//n=nodes m=edge
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //Adjacency matrix
   /* for(int i=1;i<=n;i++)
    {
         cout<<"nodes:"<<i<<" ";
        for(auto u:adj[i])
           cout<<u<<" ";
        cout<<endl;
    }*/
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(v[i]==0)
        {
             cnt=0;
            dfs(i);
            ans=max(ans,cnt);
        }
    }cout<<ans;
}
void dfs(int i)
{
    v[i]=1; cnt++;
    for(auto u:adj[i])
    {
        if(v[u]==0)
            dfs(u);
    }
}
/*
8 5
1 2
2 4
2 3
5 7
6 8
*/
