#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& nums,int i, int n) {
    if (i >= n){
        return;
    }
    int key=i;
    while (key>0 && nums[key-1]>nums[key]) {
        swap(nums[key],nums[key-1]);
        key--;
    }
    insertionSort(nums,i+1,n);




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

    insertionSort(nums,0,n);

    for (int i=0;i<n;i++) {
        cout<<nums[i]<<" ";
    }
    return 0;
}