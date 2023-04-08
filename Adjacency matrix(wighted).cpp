#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>adj[100];
int main()
{
    cout<<"Enter nodes and edge number"<<endl;
    int n,m;
    cin>>n>>m;
    pair<int,int>p;
    for(int i=0;i<m;i++)
    {
        int u,v,w;cin>>u>>v>>w;
        p=make_pair(v,w);
        adj[u].push_back(p);
         p=make_pair(u,w);
        adj[v].push_back(p);
    }
    for(int i=1;i<=n;i++)
    {

        cout<<"Adjacency list :"<<i<<" ";
        for(auto u:adj[i])
            cout<<"Node: "<<u.first<<" "<<"cost :"<<u.second<<" ";
        cout<<endl;
    }
}
/*
4 7
1 2 10
1 2 8
3 2 15
2 3 5
3 4 6
2 3 7
4 1 11
*/

