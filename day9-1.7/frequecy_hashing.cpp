#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int nums[n];
    for (int i=0 ;i<n;i++){
        cin>>nums[i];
    }
    unordered_map<int,int> freq;
    for (int i =0;i<n;i++) {
        freq[nums[i]]++;
    }
    vector<vector<int>> hmm;
    for (auto it:freq) {
        hmm.push_back({it.first,it.second});
    }
    for (auto it:freq) {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}
