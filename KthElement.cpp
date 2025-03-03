#include<bits/stdc++.h>
using namespace std;

void KthElement(vector<int> nums,int k){
    priority_queue<int> pq;
    for(int i=0;i<nums.size();i++){
        pq.push(nums[i]);
    }
    
    while(--k){
        pq.pop();
    }
    cout<<"Kth Largest:"<<pq.top()<<endl;
}

int main(){
    vector<int> nums;
    int n,k;
    
    cout<<"Enter the size of nums1:"<<endl;
    cin>>n;
    cout<<"Enter the element in nums1:"<<endl;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        nums.push_back(c);
    }
    cout<<"Enter the position:"<<endl;
    cin>>k;
    KthElement(nums,k);
    return 0;
}
