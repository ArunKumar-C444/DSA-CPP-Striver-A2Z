#include<bits/stdc++.h>
using namespace std;
int main() {
    return 0;
}
int largestElement(vector<int>& nums) {
    int lar=nums[0];
    for (int i=1;i<nums.size();i++) {
        if (nums[i]>lar) {
            lar=nums[i];
        }
    }
    return lar;
}