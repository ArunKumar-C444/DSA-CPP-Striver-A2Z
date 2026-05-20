#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;

    for (int i = 1;i<=n;i++) {
        char x = 'A';
        for (int j = 1;j<=(n-i);j++) {
            cout<<" ";
        }
        int breakpt = i ;
        for (int j = 1;j<=2*i-1;j++) {
            cout<<x;
            if(j<breakpt) {
                x++;
            }
            else {
                x--;
            }
        }
        for (int j = 1;j<=(n-i);j++) {
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}