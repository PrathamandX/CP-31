#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
         int count2=0;
        for (int i=0;i<n;i++) {
            cin>>arr[i];
            if(arr[i]==2) {
                count2++;
            }
        }
        if (count2 % 2) {
            cout<<-1<<endl;
            continue;
        }
        int index=-1;
        int count=0;
        for (int i=0;i<n;i++) {
            if (arr[i]==2)count++;
            if (count==count2/2) {
                index=i+1;
                break;
            }
        }
        cout<<index<<endl;
    }

    return 0;
}
