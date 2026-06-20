#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n=nums.size();
    if (n==0) {
        return 0;
    }
    int j=0;
    for (int i=1;i<n;i++) {
        if ( nums[i]!=nums[j]) {
            j++;
            nums[j]=nums[i];
        }
    }
    return j+1;
}

int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for (int i=0;i<n;i++) {
        int num;
        cin>>num;
        nums[i]=num;
    }

    int newLength=removeDuplicates(nums);
    for (int i=0;i<newLength;i++) {
        cout<<nums[i]<<" ";
    }
    return 0;
}