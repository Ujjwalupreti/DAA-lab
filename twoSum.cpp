#include<bits/stdc++.h>
using namespace std;

void twoSum(vector<int> nums,int key){
    sort(nums.begin(),nums.end());
    int i = 0;
    int j = nums.size()-1;
    bool flag = false;
    while(i<j){
        int sum = nums[i]+nums[j];
        if(sum==key){
            flag=true;
            break;
        } 
        else if(sum>key) j--;
        else i++;
    }
    if(flag) cout<<"Element are "<<nums[i]<<","<<nums[j]<<endl;
    else cout<<"Element is not found in array"<<endl;
}

int main(){
    vector<int> nums;
    int n,key;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        nums.push_back(c);
    }
    cout<<"Enter the Key:"<<endl;
    cin>>key;
    twoSum(nums,key);
    return 0;
}
