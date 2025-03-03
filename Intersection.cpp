#include<bits/stdc++.h>
using namespace std;

void commonElements(vector<int> nums1,vector<int> nums2){
    int n = nums1.size();
    int m = nums2.size();
    vector<int> ans;
    bool flag = false;
    int i=0,j=0;
    while(i<n && j<m){
        
        while(nums1[i]==nums1[i+1]) i++;
        while(nums2[j]==nums2[j+1]) j++;
        
        if(nums1[i]==nums2[j]){
            ans.push_back(nums2[j]);
            i++;
            j++;
            flag = true;
        }
        else if(nums1[i]>nums2[j]) j++;
        else i++;
    }
    if(flag){
        cout<<"Common Elements:";
        for(int k=0;k<ans.size();k++) cout<<ans[k]<<" ";
        cout<<endl;
    }
    else cout<<"No Common element"<<endl;
}

int main(){
    vector<int> nums1,nums2;
    int n,m;
    
    cout<<"Enter the size of nums1:"<<endl;
    cin>>n;
    cout<<"Enter the element in nums1:"<<endl;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        nums1.push_back(c);
    }
    
    cout<<"Enter the size of nums2:"<<endl;
    cin>>m;
    cout<<"Enter the element in nums2:"<<endl;
    for(int i=0;i<m;i++){
        int c;
        cin>>c;
        nums2.push_back(c);
    }
    commonElements(nums1,nums2);
    return 0;
}
