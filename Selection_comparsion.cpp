#include<bits/stdc++.h>
using namespace std;

void Selection_sort(vector<int> &nums){
    int shift=0;
    int comparsion=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            comparsion++;
            if(nums[j]<nums[index]){
                index=j;
            }
        }
        swap(nums[index],nums[i]);
        if(index!=i){
            shift++;
        }
    }
    cout<<comparsion<<endl;
    cout<<shift<<endl;
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
    Selection_sort(nums);
   for(int i=0;i<n;i++){
       cout<<nums[i]<<" ";
   }
}
