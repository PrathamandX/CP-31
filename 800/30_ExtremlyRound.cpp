#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int index=0;
        int digit=0;
        while (n>0) {
            digit++;
            index=n%10;
            n=n/10;
        }
        int count=((digit-1)*9)+index;
        cout<<count<<endl;
    }

    return 0;
}
