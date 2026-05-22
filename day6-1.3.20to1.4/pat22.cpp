#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=0;i<2*n-1;i++) {
        for(int j=0;j<2*n-1;j++) {
            int t=i;
            int b=2*n-2-i;
            int l=j;
            int r=2*n-2-j;
            int x=min(min(t,b),min(l,r));
            cout<<n-x<<" ";
        }
        cout<<endl;
    }
    return 0;
}