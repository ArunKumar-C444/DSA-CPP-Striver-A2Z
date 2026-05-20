#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        char x='A'+(n-1-i);
        for (char j=x;j<='A'+(n-1);j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}