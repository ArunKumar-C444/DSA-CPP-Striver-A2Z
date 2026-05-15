#include<bits/stdc++.h>
using namespace std;

int main() {
    int a ;
    cin>>a;
    
    if (a>=90){
        cout<<"Grade A";
    } else if (a>=70){
        cout<<"Grade B";
    } else if (a>=50) {
        cout<<"Grade C";
    } else if (a>=35) {
        cout<<"Grade D";
    } else {
        cout<<"Fail";
    }
    return 0;
}