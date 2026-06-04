#include<bits/stdc++.h>
using namespace std;
vector<int> selectionSort(vector<int>& nums) {
    int n=nums.size();
    for (int i=0;i<n-1;i++) {
        int min=i;
        for (int j=i+1;j<n;j++) {
            if (nums[j]<nums[min]) {
                min=j;
            }
        }
        swap(nums[i],nums[min]);
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
    vector<int> sorted_nums=selectionSort(nums);
    for (int i=0;i<n;i++) {
        cout<<sorted_nums[i]<<" ";
    }
    return 0;
}