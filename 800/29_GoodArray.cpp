#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<unsigned long long>vec(n);
        for (int i=0;i<n;i++) {
            cin>>vec[i];
        }
        int count=0;
        for (int i=0;i<n-1;i++) {
            if (vec[i]%2==vec[i+1]%2) {
                count++;
                vec[i+1]=vec[i]*vec[i+1];
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
