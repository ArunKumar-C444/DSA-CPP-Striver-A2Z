#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& nums,int n) {
    if (n<=1) {
        return;
    }
    int swapped=0;
    for (int i=0;i<n-1;i++) {

        if (nums[i]>nums[i+1]) {
            swap(nums[i],nums[i+1]);
            swapped=1;

        }
    }
    if (swapped==0) {
        return;
    }
    bubbleSort(nums,n-1);

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


    bubbleSort(nums,n);

    for (int i=0;i<n;i++) {
        cout<<nums[i]<<" ";
    }
    return 0;
}