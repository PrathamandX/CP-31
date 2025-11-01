#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;cin>>n;
        int arr[n];
        int count =0;
        int largest=0;
        for (int i=0;i<n;i++) {
            cin>>arr[i];
            if (arr[i]==0) {
                count++;
            }
            if (arr[i]==1) {
                if (count>largest) {
                    largest=count;
                }
                count=0;
            }
        }
        if (count>largest)largest=count;
        cout<<largest<<endl;

    }

    return 0;
}
