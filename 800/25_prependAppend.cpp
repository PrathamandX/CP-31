#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int count=n;
        if (n%2) {
            for (int i=0;i<n/2;i++) {
                if (str[i]^str[n-1-i]) {
                    count-=2;
                }
                else {
                    break;
                }
            }
            if (count<0) {
                cout<<0<<endl;
                continue;
            }
            cout<<count<<endl;
            continue;
        }
        else {
            for (int i=0;i<=n/2;i++) {
                if (str[i]^str[n-1-i]) {
                    count-=2;
                }
                else {
                    break;
                }
            }
            if (count<0) {
                cout<<0<<endl;
                continue;
            }
            cout<<count<<endl;
            continue;
        }

    }

    return 0;
}
