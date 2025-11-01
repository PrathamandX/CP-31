#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t) {
        t--;
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x;
        cin>>s;
        int temp = m;
        int temp1=n;
        int count = 0;
        do {
            size_t idx=x.find(s);

            if (idx!=string::npos) {
                cout<<count<<endl;
                break;
            }
            else {
                x=x+x;
                n=x.length();
                count++;
            }

        }while (count<6);

        if (count>5) {
            cout<<-1<<endl;
        }
    }

    return  0;
}
