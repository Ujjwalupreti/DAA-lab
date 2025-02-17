#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &nums){
    int shift=0;
    int comparsion=0;
    int n=nums.size();
    for(int i=1;i<n;i++){
        int temp = nums[i];
        int j = i-1;
        while(j>= 0 && nums[j]>temp){
            nums[j+1]=nums[j];
            j--;
            comparsion++;
            shift++;
        }
        nums[j+1]=temp;
        if(j>=0){
            comparsion++;
        }
    }
    cout<<comparsion<<" "<<shift<<endl;
}

int main(){
    int n;
    vector<int> nums;
    cout<<"Enter the size:";
    cin>>n;
    cout<<"Enter the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    insertion_sort(nums);
   for(int i=0;i<n;i++){
       cout<<nums[i]<<endl;
   }
}
