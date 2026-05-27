#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    patsum(n);
}

void patsum(int n){
    if(n==0) return ;
    patsum(n-1);
    cout<<n<<endl;
}