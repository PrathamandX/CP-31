#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        int mult1=1;
        for (int i=0;i<n;i++) {
            cin>>arr[i];
            mult1=mult1*arr[i];
        }
        int mult2=1;
        int k=-1;
        for (int i=0;i<n;i++) {
            mult2=mult2*arr[i];
            mult1=mult1/arr[i];
            if (mult1==mult2) {
                k=i+1;
                break;
            }
        }
        cout<<k<<endl;
    }

    return 0;
}
