// #include <bits/stdc++.h>
// using namespace std;
// int cnt;
// void tower_of_hanoi(int disk, char BEGIN, char END, char AUX) {
//     if(disk==0) return;
//     tower_of_hanoi(disk-1,BEGIN,AUX,END);
//     cout << "Move disk " << disk << " from " << BEGIN << " to " << END << '\n';
//     cnt++;
//     tower_of_hanoi(disk-1,AUX,END,BEGIN);
// }

// int32_t main() {
    
//     int n; cin >> n;
//     char BEG,END,AUX;
//     cin >> BEG >> END >> AUX;
//     tower_of_hanoi(n,BEG,END,AUX);
//     cout<<"Total Moves needed: "<<cnt<<'\n';

//     return 0;
// }

#include <iostream>  

using namespace std;  
  
int partition (int a[], int start, int end)   {  
    int pivot = a[end]; 
    int i = (start - 1);  
  
    for (int j = start; j <= end - 1; j++)  {  
        if (a[j] < pivot)  {  
            i++; 
            int t = a[i];  
            a[i] = a[j];  
            a[j] = t;  
        }  
    }  
    int t = a[i+1];  
    a[i+1] = a[end];  
    a[end] = t;  
    return (i + 1);  
}  
void quick(int a[], int start, int end) 
{  
    if (start < end)  
    {  
        int p = partition(a, start, end);  
        quick(a, start, p - 1);  
        quick(a, p + 1, end);  
    }  
}  
  

void printArr(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout<<a[i]<< " ";  
}  
int main()  
{  
    int a[] = { 23, 8, 28, 13, 18, 26 };  
    int n = sizeof(a) / sizeof(a[0]);  
    cout<<"Before sorting array elements are - \n";  
    printArr(a, n);  
    quick(a, 0, n - 1);  
    cout<<"\nAfter sorting array elements are - \n";    
    printArr(a, n);  
      
    return 0;  
}  
// #include<bits/stdc++.h>
// using namespace std;
// void merge(int a[],int l,int m,int r)
// {
//     int leftSize = m-l+1;
//     int rightSize = r-m;
//     int L[leftSize],R[rightSize];
//     int k=0;
//     for(int i=l;i<=m;i++)
//     {
//         L[k]=a[i];
//         k++;
//     }
//     k=0;
//     for(int i=m+1;i<=r;i++)
//     {
//         R[k]=a[i];
//         k++;
//     }
//     int i=0,j=0;
//     int cur=l;
//     while(i<leftSize && j<rightSize)
//     {
//         if(L[i] <= R[j])
//         {
//             a[cur]=L[i];
//             i++;
//         }
//         else 
//         {
//             a[cur]=R[j];
//             j++;
//         }
//         cur++;
//     }

//     while(i<leftSize)
//     {
//         a[cur]=L[i];
//         i++;
//         cur++;
//     }

//     while(j<rightSize)
//     {
//         a[cur]=R[j];
//         j++;
//         cur++;
//     }
// }
// void merge_sort(int a[],int l,int r)
// {
//     if(l<r)
//     {
//         int mid=(l+r)/2;
//         merge_sort(a,l,mid);
//         merge_sort(a,mid+1,r);
//         merge(a,l,mid,r);
//     }
// }
// int main()
// {
//     int n; 
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     merge_sort(a,0,n-1);
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }








// merge two array
// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// using ull = unsigned long long;
// const char nl= '\n';
// #define all(x) x.begin(),x.end()
// #define minimum(x) *min_element(x.begin(),x.end())
// #define maximum(x) *max_element(x.begin(),x.end())


// const int N=1e5+7;
// int result[N];


// void merge(int l,int r, int mid){
//     int left= mid-l+1;
//     int L_A[left+1];
//     int right= r-(mid+1)+1;
//     int R_A[right+1];


//     for(int i=l,j=0; i<=mid; i++,j++) L_A[j]=result[i];
   
//     for(int i=mid+1,j=0; i<=r; i++,j++) R_A[j]=result[i];


//     L_A[left]=INT_MIN;
//     R_A[right]=INT_MIN;


//     int lp=0,rp=0;
//     for(int i=l; i<=r; i++){
//         if(L_A[lp]>=R_A[rp]){
//             result[i]=L_A[lp];
//             lp++;
//         } else {
//                 result[i]=R_A[rp];
//                 rp++;
//             }
//     }
// }


// void merge_Sort(int l,int r){
//     if(l==r) return ;
//     int mid= (l+r)/2;
//     merge_Sort(l,mid);
//     merge_Sort(mid+1,r);
//     merge(l,r,mid);
// }


// int32_t main() {
//     cin.tie(0)->sync_with_stdio(0);
//     cin.exceptions(cin.failbit);
   
//     int n; cin>>n;
//     int first[n];
//     for(int i=0; i<n; i++){
//         cin>>first[i];
//         result[i]=first[i];
//     }
//     int x; cin>>x;
//     int second[x];
//     for(int i=0; i<x; i++){
//         cin>>second[i];
//         result[x+i]=second[i];
//     }
//     merge_Sort(0,n+x-1);
//     for(int i=0; i<n+x; i++){
//         cout<<result[i]<<" ";
//     }
   
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int Queue[100], n = 100, front = - 1, rear = - 1;
// void Insert() {
//    int val;
//    if (rear == n - 1)
//    cout<<"Queue Overflow"<<endl;
//    else {
//       if (front == - 1)
//       front = 0;
//       cout<<"Insert the element in queue : "<<endl;
//       cin>>val;
//       rear++;
//       Queue[rear] = val;
//    }
// }
// void Delete() {
//    if (front == - 1 || front > rear) {
//       cout<<"Queue Underflow ";
//       return ;
//    } else {
//       cout<<"Element deleted from queue is : "<< Queue[front] <<endl;
//       front++;;
//    }
// }
// void Display() {
//    if (front == - 1)
//    cout<<"Queue is empty"<<endl;
//    else {
//       cout<<"Queue elements are : ";
//       for (int i = front; i <= rear; i++)
//       cout<<Queue[i]<<" ";
//          cout<<endl;
//    }
// }
// int main() {
//    int ch;
//    cout<<"1) Insert element to queue"<<endl;
//    cout<<"2) Delete element from queue"<<endl;
//    cout<<"3) Display all the elements of queue"<<endl;
//    cout<<"4) Exit"<<endl;
//    do {
//       cout<<"Enter your choice : "<<endl;
//       cin>>ch;
//       switch (ch) {
//          case 1: Insert();
//          break;
//          case 2: Delete();
//          break;
//          case 3: Display();
//          break;
//          case 4: cout<<"Exit"<<endl;
//          break;
//          default: cout<<"Invalid choice"<<endl;
//       }
//    } while(ch!=4);
//    return 0;
// }