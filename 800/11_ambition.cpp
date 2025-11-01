
#include<bits/stdc++.h>
using namespace std;


int main() {
    int  n;
    cin>>n;
    int temp;
    int dist=INT_MAX;
    for (int i=0;i<n;i++) {
        cin>>temp;
        if (temp<0) {
            temp=-1*temp;
        }
        if (temp<dist) {
            dist=temp;
        }
        if (dist==0) {
            cout<<0<<endl;
            return 0;
        }
    }
    cout<<dist<<endl;
    return 0;
}
