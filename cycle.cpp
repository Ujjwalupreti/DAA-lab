#include<bits/stdc++.h>
using namespace std;

bool DFS(vector<vector<int>> &arr,int s,vector<int> &visited){
    if(visited[s]==1) return true;
    visited[s]=1;
    for(int i=0;i<arr.size();i++){
        if(!visited[i]){
          if(arr[i][s]==1){
            if(DFS(arr,i,visited)) return true;
            else if(visited[i]==1) return true;
          }
        }
    }
    visited[s]=2;
    return false;
}

bool isCycle(vector<vector<int>> &arr){
    vector<int> visited(arr.size(),0);
    for(int i=0;i<arr.size();i++){
        if(!visited[i]){
            if(DFS(arr,i,visited)) return true;
        }
    }
    return false;
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
    if(isCycle(arr)) cout<<"Cycle";
    else cout<<"Not Cycle";
    return 0;
}
