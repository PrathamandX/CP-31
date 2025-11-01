#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<long>arr(n);
        int temp=INT_MAX;
        int tempind;
        for (int i=0;i<n;i++) {
            cin>>arr[i];
            if (i>0) {
                if (arr[i]-arr[i-1]<temp) {
                    temp=arr[i]-arr[i-1];
                    tempind=i-1;
                }
            }
        }
        if (temp<0) {
            cout<<0<<endl;
            continue;
        }
        else if (temp==0) {
            cout<<1<<endl;
        }
        else {
            int mid=arr[tempind]+arr[tempind+1];
            mid=mid/2;
            int op=mid-arr[tempind];
            cout<<op+1<<endl;
        }
    }
    return 0;
}
