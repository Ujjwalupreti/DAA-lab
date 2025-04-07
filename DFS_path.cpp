#include<bits/stdc++.h>
using namespace std;

bool DFS(vector<vector<int>> arr,int node,vector<bool> &visited,int dest){
    if(node==dest) return true;
    visited[node]=true;
    
    for(int i=0;i<arr.size();i++){
        if(arr[i][node]==1 && !visited[i]){
            bool flag = DFS(arr,i,visited,dest);
            if(flag) return true;
        }
    }
    
    return false;
}

int main() {
    //6x6
    vector<vector<int>> graph = {
        {0,1,1,0,0,0},
        {1,0,1,1,1,0},
        {1,1,0,1,0,0},
        {0,1,1,0,1,0},
        {0,1,0,1,0,0},
        {0,0,0,0,0,0}
    };
    
    vector<bool> visited(graph.size(),false);
    
    int src,dest;
    cout<<"Enter the src and dest"<<endl;
    cin>>src>>dest;
    
    if(DFS(graph,src,visited,dest)) cout<<"Yes Path Exists";
    else cout<<"No Such Path Exists";
    return 0;
}
