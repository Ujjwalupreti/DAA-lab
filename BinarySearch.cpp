#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>& nums,int key){
    int s=0;
    int e=nums.size();
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==key){
            return mid;
        }
        else if(nums[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
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
    int flag = BinarySearch(nums,key);
    if(flag!=-1){
        cout<<"Key is found at index:"<<flag<<endl;
    }
    else{
        cout<<"Key is not found in array"<<endl;
    }
}
