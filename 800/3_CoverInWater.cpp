#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t) {
        t--;
        int n;
        cin>>n;
        string s;
        cin>>s;
        int min=0;
        int empty=0;
        for (int i=0;i<n+1;i++) {
            if (s[i]=='.') {
                empty++;
                if (empty==3) {
                    min=2;
                    break;
                }
            }
            if (s[i]=='#'||s[i]=='\0') {
                if (empty==2) {
                    min+=2;
                    empty=0;
                }
                if (empty==1) {
                    min++;
                    empty=0;
                }

            }
        }
        cout<<min<<endl;
    }

    return 0;
}