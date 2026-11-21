// linear search binary search 16-07-23 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl= '\n';

int linear_search(int a[],int n,int element) {
    int position=-1;
    for(int i=0; i<n; i++) {
        if(a[i]==element) {
            position=i+1;
            break;
        }
    }
    return position;
}

int binarySearch(int ar[],int size, int element) {
    int left=0, right= size-1, mid;
    while(left<=right) {
        mid=(left+right)/2;
        if(ar[mid]==element) {
            return mid;
        }
        if(ar[mid]<element) {
            left=mid+1;
        } else {
            right=mid-1;
        }
    }
    return -1;

}
void sort_array(int a[],int n) {
        for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
           if(a[i]>a[j]) {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    // sorting
    sort_array(a,n);
    int x; cin >> x;
    // int ans=linear_search(a,n,x);
    int ans=binarySearch(a,n,x);
    if(ans==-1) cout<<"Not found"<<nl;
    else cout<<"found at position "<<ans<<nl;
    return 0;
}


// void selectionSort(int array[], int size) {
//   for (int step = 0; step < size - 1; step++) {
//     int min_idx = step;
//     for (int i = step + 1; i < size; i++) {

//       // To sort in descending order, change > to < in this line.
//       // Select the minimum element in each loop.
//       if (array[i] < array[min_idx])
//         min_idx = i;
//     }

//     // put min at the correct position
//     swap(&array[min_idx], &array[step]);
//   }
// }

// void insertionSort(int array[], int size) {
//   for (int step = 1; step < size; step++) {
//     int key = array[step];
//     int j = step - 1;

//     // Compare key with each element on the left of it until an element smaller than
//     // it is found.
//     // For descending order, change key<array[j] to key>array[j].
//     while (key < array[j] && j >= 0) {
//       array[j + 1] = array[j];
//       --j;
//     }
//     array[j + 1] = key;
//   }
// }
