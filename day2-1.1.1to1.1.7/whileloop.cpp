#include<bits/stdc++.h>
using namespace std;

int main() {
    int d;
    cin>>d;
    int sum=0;
    int n=50;
    int num=1;
    while (n>0) {
        while(!(num%10==d)) {
            num++;
        }
        sum+=num;
        num++;
        n--;

    }
    cout<<sum;
    return 0;
}
