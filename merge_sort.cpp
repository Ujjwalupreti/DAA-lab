#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums,int low,int mid,int high,int &comp,int &inv){
    vector<int> arr;
    int i=low;
    int j=mid+1;
    while(i<=mid && j<=high){
        comp++;
        if(nums[i]>=nums[j]){
            arr.push_back(nums[j]);
            inv+=(mid-i+1);
            j++;
        }
        else{
           arr.push_back(nums[i]);
           i++;
        }
    }
    
    while(i<=mid){
        arr.push_back(nums[i]);
        i++;
    }
    while(j<=high){
        arr.push_back(nums[j]);
        j++;
    }
    
    for(int c = 0;c<arr.size();c++){
        nums[c+low] = arr[c];
    }
}

void merge_sort(vector<int> &nums,int low,int high,int &comp,int &inv){
    if(low<high){
        int mid = (low+high)/2;
        merge_sort(nums,low,mid,comp,inv);
        merge_sort(nums,mid+1,high,comp,inv);
        merge(nums,low,mid,high,comp,inv);
    }
}

int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int> nums;
    
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        nums.push_back(e);
    }
    int comp = 0;
    int inv = 0;
    merge_sort(nums,0,n-1,comp,inv);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<"Comparisons:"<<comp<<endl;
    cout<<"Inversion:"<<inv<<endl;
}
