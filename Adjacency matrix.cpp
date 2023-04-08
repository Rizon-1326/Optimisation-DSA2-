#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
int main()
{
    cout<<"Enter nodes and edge number"<<endl;
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
    {

        cout<<"Adjacency list :"<<i<<" ";
        for(auto u:adj[i])
            cout<<u<<" ";
        cout<<endl;
    }
}
/*
4 5
1 2
2 3
3 4
2 3
4 1
*/
