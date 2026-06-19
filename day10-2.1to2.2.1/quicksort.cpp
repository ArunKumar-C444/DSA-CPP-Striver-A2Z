#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& nums,int l,int r) {
    int pivot=nums[l];
    int i=l;
    int j=r;
    while (i<j) {
        while(i<=r && nums[i]<=pivot) {
            i++;
        }
        while(j>=l && nums[j]>pivot) {
            j--;
        }
        if (i<j) {
            swap(nums[i],nums[j]);
        }
    }
    swap(nums[l],nums[j]);
    return j;
    
}

void quickSort(vector<int>& nums,int l,int r) {
    if (l>=r) {
        return;
    }
    int pivot=partition(nums,l,r);

    quickSort(nums,l,pivot-1);
    quickSort(nums,pivot+1,r);

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

    quickSort(nums,0,n-1);

    for (int i=0;i<n;i++) {
        cout<<nums[i]<<" ";
    }
    return 0;
}