#include<bits/stdc++.h>
using namespace std;

void path(vector<int> &parent,int j){
    if(parent[j]==-1){
        cout<<j<<" ";
        return;
    }
    path(parent,parent[j]);
    cout<<j<<" ";
}

void Dijkstra(vector<vector<int>> &arr,int src,int dest){
    vector<int> visited(arr.size(),0);
    vector<int> dist(arr.size(),INT_MAX);
    vector<int> parent(arr.size(),-1);
    priority_queue<int> pq;
    dist[src]=0;
    visited[src]=1;
    pq.push(src);
    while(!pq.empty()){
        int u = pq.top();
        pq.pop();
        for(int v=0;v<arr.size();v++){
                if(arr[u][v]!=0){
                    if(dist[v]>dist[u]+arr[u][v]){
                    dist[v]=dist[u]+arr[u][v];
                    parent[v]=u;
                    if(!visited[v]){
                        pq.push(v);
                        visited[v]=1;
                    }
                }
            }
        }
    }
    
    for(int i=0;i<dist.size();i++){
        cout<<i<<":"<<dist[i]<<endl;
    }
    
    path(parent,dest);
}

int main() {
    int n;
    cout<<"Enter:"<<endl;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter:"<<endl;
    int src,dest;
    cin>>src>>dest;
    Dijkstra(arr,src,dest);
    return 0;
}
