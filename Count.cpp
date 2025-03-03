#include<bits/stdc++.h>
using namespace std;

void counting_sort(string str){
    vector<int> frq(256,0);
    for(int i=0;i<str.length();i++){
        frq[str[i]]++;
    }
    int c=0;
    int index=0;
    for(int i=0;i<256;i++){
        if(c<frq[i]){
            c=frq[i];
            index=i;
        }
    }
    cout<<"Max:"<<(char)(index)<<":"<<c<<endl;
}

int main(){
    string str;
    cout<<"Enter the string:"<<endl;
    cin>>str;
    counting_sort(str);
    return 0;
}
