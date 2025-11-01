#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        int res=0;
        for (int i=0;i<n;i++) {
            cin>>arr[i];
            res=res^arr[i];
        }
        if (res==0) {
            cout<<res<<endl;
            continue;
        }
        else {
            if (n%2)cout<<res<<endl;
            else cout<<-1<<endl;
        }
    }

    return 0;
}
