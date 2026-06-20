#include<bits/stdc++.h>
using namespace std;
int main() {
    return 0;
}

bool isSorted(vector<int>& nums) {
    for (int i=1;i<nums.size();i++) {
        if (nums[i]<nums[i-1]) {
            return false;
        }
    }
    return true;
}