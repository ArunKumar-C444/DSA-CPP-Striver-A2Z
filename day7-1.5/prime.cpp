#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> div;
    for (int i=1;i*i<=n;i++) {
        if (n%i==0) {
            div.push_back(i);
            if (i!=n/i) {
                div.push_back(n/i);
            }
        }
    }
    if (div.size()==2) {
        cout<<"true";
    }
    else {
        cout<<"false";
        }
    if (div.size()==2) {
        return true;
    }
    else {
        return false;
    }
    return 0;
}