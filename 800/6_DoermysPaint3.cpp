#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t) {
        t--;
        int n;
        cin>>n;
        int arr[n];
        int num1;
        int num2;
        int num1count=0;
        int num2count=0;
        cin>>arr[0];
        num1=arr[0];
        for (int i=1;i<n;i++) {
            cin>>arr[i];
            if (arr[i]!=num1) {
                num2=arr[i];
            }
        }
        for (int i=0;i<n;i++) {
            if (arr[i]==num1) {
                num1count++;
            }
            else if (arr[i]==num2) {
                num2count++;
            }
        }
        if (num1count+num2count!=n) {
            cout<<"No\n";
        }
        else if (num1count==n) {
            cout<<"Yes\n";
        }
        else if (num2count==n) {
            cout<<"Yes\n";
        }
        else {
            int diff=num1count-num2count;
            if (diff==0||diff==1||diff==-1) {
                cout<<"Yes\n";
            }
            else {
                cout<<"No\n";
            }
        }
    }


    return 0;
}
