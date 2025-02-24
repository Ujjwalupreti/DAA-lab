#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &nums,int low,int high,int &comp,int &shift){
    int pivot = nums[low];
    int i = low;
    int j= high;
    while(i<j){
        while(nums[i]<=pivot && i<=high-1){
            i++;
            comp++;
        }
        while(nums[j]>pivot && j>=low+1){
            j--;
            comp++;
        }
        if(i<j){
            swap(nums[i],nums[j]);
            shift++;
        }
    }
    swap(nums[j],nums[low]);
    shift++;
    return j;
}

void quick_sort(vector<int> &nums,int low,int high,int &comp,int &shift){
    if(low<high){
        int pos = partition(nums,low,high,comp,shift);
        quick_sort(nums,low,pos-1,comp,shift);
        quick_sort(nums,pos+1,high,comp,shift);
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
    int shift = 0;
    quick_sort(nums,0,n-1,comp,shift);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<"Comparisons:"<<comp<<endl;
    cout<<"Shift:"<<shift<<endl;
}
