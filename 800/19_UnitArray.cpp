#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>vec(n);
        int sum=0;
        int product=1;
        for (int i=0;i<n;i++) {
            cin>>vec[i];
            sum+=vec[i];
            product*=vec[i];
        }
        int count=0;
        if (sum>=0&&product==1) {
            cout<<count<<endl;
        }
        else if (sum>=0&&product==-1) {
            cout<<1<<endl;
        }
        else {
            while (sum<0||product==-1) {
                sum+=2;
                product=-product;
                count++;
            }
            cout<<count<<endl;
        }

    }

    return 0;
}
