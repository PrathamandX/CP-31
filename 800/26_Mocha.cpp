#include <bits/stdc++.h>
using namespace std;

bool IsBeautiful(int n,vector<int>& arr) {
    int gcdval=0;
    for (int i=0;i<n;i++) {
        gcdval=gcd(gcdval,arr[i]);
    }
    if (gcdval>n)return false;
    else return true;
}


int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }
        int flag=0;
        sort(arr.begin(),arr.end());
        for (int i=2;i<=n;i++) {
            if (!IsBeautiful(i,arr)) {
                flag=1;
                break;
            }
        }
        if (flag) {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;

    }

    return 0;
}