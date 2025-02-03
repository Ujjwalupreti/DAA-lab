#include <bits/stdc++.h>
using namespace std;
 
int binarySearch(vector<int> nums, int low, int high, int x)
{
    if (high >= low)
    {
        int mid = low + (high - low)/2;
        if (nums[mid] == x)
            return mid;
        if (nums[mid] > x)
            return binarySearch(nums, low, mid-1, x);
        return binarySearch(nums, mid+1, high, x);
    }
    return -1;
}

int JumpSearch(vector<int> nums, int x)
{
    int n = nums.size();
    if (nums[0] == x)
        return 0;
    int i = 1;
    while (i < n && nums[i] <= x)
        i = i*2;
 
    return binarySearch(nums, i/2,min(i, n-1), x);
}

int main(){
    vector<int> nums = {1,2,3,4,5,8,9,10};
    int key;
    cout<<"Enter the key:";
    cin>>key;
    int flag = JumpSearch(nums,key);
    if(flag!=-1){
        cout<<"Key is found at index:"<<flag<<endl;
    }
    else{
        cout<<"key is not found"<<endl;
    }
}   