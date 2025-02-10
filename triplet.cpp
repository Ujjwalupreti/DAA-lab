#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(vector<int> nums){
    int n = nums.size();
    vector<int> temp;
    vector<vector<int>> ans;
    for(int k=2;k<n;k++){
        int i=0,j=k-1;
        while(i<j){
            if(nums[i]+nums[j]==nums[k]){
                temp.push_back(i);
                temp.push_back(j);
                temp.push_back(k);
                ans.push_back(temp);
                i++;
                j--;
                temp.clear();
            }
            else if(nums[i]+nums[j]<nums[k]){
                i++;
            }
            else{
                j--;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums;
    vector<vector<int>> ans;
    int n;
    
    cout<<"Enter the size"<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++){
      cin>>nums[i];
      }
      
    ans = triplet(nums);
    for(auto it:ans){
        for(auto jt:it){
            cout<<jt<<" ";
        }
        cout<<endl;
    }
   
}    
