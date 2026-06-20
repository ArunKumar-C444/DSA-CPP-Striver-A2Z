#include<bits/stdc++.h>
using namespace std;
int main() {
    return 0;
}

int secondLargestElement(vector<int>& nums) {
    int lar=nums[0];
    int secLar=-1;
    for (int i=1;i<nums.size();i++) {
        if (nums[i]>lar) {
            secLar=lar;
            lar=nums[i];
        }else if ( nums[i]>secLar && nums[i]!=lar) {
            secLar=nums[i];
        }
    }
    return secLar;
}