#include<bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int>& nums) {
    int n=nums.size();
    for (int i = 0;i<n-1;i++) {
        int swapped=0;
        for (int j=0;j<n-i-1;j++) {
            if (nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                swapped=1;
            }
        }
        if (swapped==0) {
            break;
        }
    }
    return nums;
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
    vector<int> x=bubbleSort(nums);


    for (int i=0;i<n;i++) {
        cout<<x[i]<<" ";
    }
    return 0;
}