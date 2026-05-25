#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int rev=0;
    int x=n;
    while(x>0){
        rev=rev*10+x%10;
        x=x/10;
    }
    if(rev==n){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    if(rev==n){
        return true;
    }
    else {
        return false;
    }
    return 0;
}