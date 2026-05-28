#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for (int i=0 ;i<n;i++){
        cin>>nums[i];
    }
    map<int,int> freq;
    for (int i = 0 ;i<n;i++) {
        freq[nums[i]]++;
    }
    int max_freq=0;
    int num=0;
    for(auto it:freq) {

        if (it.second>max_freq){
            max_freq=it.second;
            num=it.first;
            cout<<num<<endl;
        }
    }

    return 0;
}