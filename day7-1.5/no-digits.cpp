#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
    cout<<count;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count=log10(n)+1;
    cout<<count;
    return 0;
}