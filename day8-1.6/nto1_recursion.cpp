#include<bits/stdc++.h>
using namespace std;

void patsum(int n){
    if(n==0) return ;
    cout<<n<<endl;
    patsum(n-1);

}

int main() {
    int n;
    cin>>n;
    patsum(n);
    return 0;
}