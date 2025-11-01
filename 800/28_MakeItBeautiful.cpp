#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>vec(n);
        for (int i=0;i<n;i++) {
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end(),greater<int>());
        int flag1=0;
        for (int i=1;i<n;i++) {
            if (vec[i]!=vec[0])flag1=1;
        }
        if (flag1) {
           if (vec[1]==vec[0]) swap(vec[0],vec[n-1]);
        }
        else {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for (int i:vec) {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}