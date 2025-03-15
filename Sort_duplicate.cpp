#include<bits/stdc++.h>
using namespace std;

bool Isduplicate(vector<int> &nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    
    for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1]){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    vector<int> nums;
    cout<<"Enter the size:";
    cin>>n;
    cout<<"Enter the array:"<<endl;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        nums.push_back(c);
    }
   
   cout<<"Duplicate in array:";
   if(Isduplicate(nums)){
       cout<<"YES"<<endl;
   }
   else{
       cout<<"NO"<<endl;
   }
}
