#include <bits/stdc++.h>
using namespace std;

bool isRound(int n) {
    int count=0;
    while(n>0) {
        if (n%10)count++;
        n=n/10;
        if (count>2)break;
    }
    if (count>1)return false;
    else return true;
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int count=0;
        for (int i=1;i<=n;i++) {
            if (isRound(i)) count++;
        }
        cout<<count<<endl;
    }

    return 0;
}