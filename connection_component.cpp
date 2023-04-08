#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
int v[100];
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
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(v[i]==0)
        {
            dfs(i);
            cnt++;
        }
    }cout<<cnt;
}
void dfs(int i)
{
    v[i]=1;
    for(auto u:adj[i])
    {
        if(v[u]==0)
            dfs(u);
    }
}
