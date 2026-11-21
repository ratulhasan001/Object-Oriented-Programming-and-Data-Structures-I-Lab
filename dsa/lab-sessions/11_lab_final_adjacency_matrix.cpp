// binary tree inorder traversal
// binary search tree implementation

// lab final
// all kind of sorting- bubble, insertion, merge, quick selection
// queue, stack --> push pop expression parenthesis postfix, tower of hanoi
// adj matrix



#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, e;
    cin >> n >> e;
    int g[n + 1][n + 1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            g[i][j] = 0;
        }
    }

    while (e--) {
        char u, v;
        cin >> u >> v;
        g[u - 'A' + 1][v - 'A' + 1] = 1;
        g[v - 'A' + 1][u - 'A' + 1] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << g[i][j] << " ";
        }
        cout << '\n' ;
    }

    return 0;
}




