#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if(y<b){
            cout<<-1<<endl;
            continue;
        }
        if((x+b-y-a)>0){
            cout<<-1<<endl;
            continue;
        }
        if(b==y){
            cout<<abs(a-x)<<endl;
            continue;
        }
        else{
            int count=0;
            while(a!=x+b-y){
                a--;
                count++;
            }
            while(a!=x){
                a++;
                count++;
            }
            cout<<count<<endl;
        }

    }

    return 0;
}
