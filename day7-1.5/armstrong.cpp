#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int digits=log10(n)+1;
    int sum=0;
    int x=n;
    while(x>0){
        sum+=pow(x%10,digits);
        x=x/10;
    }
    if(sum==n){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    if(sum==n){
        return true;
    }
    else {
        return false;
    }
    return 0;
}