#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl= '\n';

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    // insertion
    int item,pos;  // 1 2 3 4 5 X   1 2 3 3 4 5
    cin >> item >> pos;
    n++; // increasing
    for(int i=n-1; i>=pos-1;i--) {
        a[i+1]=a[i];
    }
    a[pos-1]=item;
    for(int i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }
    // deletion
    // int del_pos; cin >> del_pos;
    // for(int i=del_pos-1;i<n;i++) {
    //    a[i]=a[i+1];
    // }
    // n--;
    // for(int i=0; i<n;i++) {
    //    cout<<a[i]<<" ";
    // }
    // updating

    // int update_position,update_value;
    // cin >> update_position >> update_value;
    // a[update_position-1]=update_value;
    // for(int i=0; i<n; i++) {
    //     cout<<a[i]<<" ";
    // }
    return 0;
}


