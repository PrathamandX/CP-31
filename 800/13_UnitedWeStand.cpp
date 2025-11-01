#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        int temp=INT_MAX;
        for (int i=0;i<n;i++) {
            cin>>a[i];
            if (a[i]<temp) temp=a[i];
        }
        vector<int>b;
        vector<int>c;
        for (int i=0;i<n;i++) {
            if (a[i]<=temp) {
                b.push_back(a[i]);
            }
            else {
                c.push_back(a[i]);
            }
        }
        if (b.size()&&c.size()) {
            cout<<b.size()<<" "<<c.size()<<endl;
            for (int i:b) {
                cout<<i<<" ";
            }
            cout<<endl;
            for (int i:c) {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else {
            cout<<-1<<endl;
        }
    }
    return 0;
}
