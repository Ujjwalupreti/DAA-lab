#include<bits/stdc++.h>
using namespace std;

int first_index(vector<int> nums,int key)
{
    int low =0;
    int high = nums.size()-1;
    int res=-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]==key){
            res=mid;
            high=mid-1;
        }
        else if(nums[mid]>key){
            high=mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return res;
}

int last_index(vector<int> nums,int key)
{
    int low =0;
    int high = nums.size()-1;
    int res=-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]==key){
            res=mid;
            low=mid+1;
        }
        else if(nums[mid]>key){
            high=mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return res;
}

int main() {
    vector<int> nums;
    int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    int key;
    cout<<"Enter the key:"<<endl;
    cin>>key;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int flag_first = first_index(nums,key);
    int flag_last =last_index(nums,key);
    if(flag_first==-1 || flag_last==-1){
        cout<<"Key Not Found"<<endl;
        return 0;
    }
    int count = flag_last-flag_first+1;
    cout<<"No. of Element in array is "<<count<<endl;
}    
