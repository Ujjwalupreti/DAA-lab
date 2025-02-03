#include <bits/stdc++.h>
using namespace std;

int linearsearch(vector<int>& nums,int key){
    for(int i=0;i<nums.size();i++){
        if(nums[i]==key){
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int key;
    cout<<"Enter the value of key:";
    cin>>key;
    int flag = linearsearch(nums,key);
    if(flag!=-1){
        cout<<"Key is found at index:"<<flag<<endl;
    }
    else{
        cout<<"Key is not found in array"<<endl;
    }
}
