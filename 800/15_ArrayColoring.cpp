#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        int COdd=0;
        int CEven=0;
        for (int i=0;i<n;i++) {
            cin>>arr[i];
            if (arr[i]%2) COdd++;
            else CEven++;
        }
        if (COdd%2)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;

    }
    return 0;
}
