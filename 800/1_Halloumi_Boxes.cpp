#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t) {
        t--;
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }
        int flag=1;
        for (int i=0;i<n-1;i++) {
            if (arr[i]>arr[i+1]) {
                flag=0;
                break;
            }
        }
        if (flag) {
            cout<<"YES"<<endl;
        }
        else {
            if (k>1) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }

    }
return 0;
}
