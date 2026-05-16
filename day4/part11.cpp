#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x=1;
    for (int i =1;i<=n;i++){
        int m=x;
        for (int j = 1;j<=i;j++){
            cout<<m<<" ";
            m=1-m;
            
        }
        x=1-x;
        cout<<endl;
    }
}