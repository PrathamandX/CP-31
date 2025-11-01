#include<bits/stdc++.h>
using namespace  std;

int main() {
    long long t;
    cin>>t;
    while (t) {
        t--;
         long long n;
        cin>>n;
         long long arr[n][2];
        cin>>arr[0][0];
        arr[0][1]=0;
        long long count=0;
        for (long long i=1;i<n;i++) {
            cin>>arr[i][0];
            if (arr[i][0]<arr[i-1][0]) {
                arr[i][1]=1;
                count++;
            }
            else {
                arr[i][1]=0;
            }
        }
        cout<<n+count<<endl;
        for (long long i=0;i<n;i++) {
            if (arr[i][1]==1) {
                cout<<arr[i][0]<<" "<<arr[i][0]<<" ";
            }
            else {
                cout<<arr[i][0]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
