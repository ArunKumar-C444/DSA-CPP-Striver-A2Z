#include<bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int> nums) {
    int n=nums.size();
    for (int i=1;i<n;i++) {
        int key=i;
        while (key>0 && nums[key-1]>nums[key]) {
            swap(nums[key],nums[key-1]);
            key--;
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


    vector<int> sorted=insertionSort(nums);

    for (int i=0;i<n;i++) {
        cout<<sorted[i]<<" ";
    }
    return 0;
}