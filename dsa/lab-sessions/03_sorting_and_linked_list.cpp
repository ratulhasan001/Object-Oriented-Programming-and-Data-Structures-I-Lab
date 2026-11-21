#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl= '\n';

void bubbleSort(int a[],int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++) {
           if(a[j]>a[j+1]) {
                // swap(a[j],a[j+1]);
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
           }            
        }
    }
}
void selectionSort(int a[],int n) {
    for(int i=0 ; i<n-1; i++) {
        int index= i;
        for(int j=index+1; j<n; j++) {
            if(a[j]<a[index]) index=j;
        }
        swap(a[index],a[i]);
    }
}

void insertion_sort(int a[],int n) {
    for(int i=1; i<n; i++){
        int value_to_insert=a[i];
        int j=i;
        while(j>0 && a[i-1]>value_to_insert) {
            a[j]=a[j-1];
            j--;
        }
        a[j]=value_to_insert;
    }
}

int32_t main() {

    
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    // bubbleSort(a,n);
    // selectionSort(a,n);
    insertion_sort(a,n);
    for(int i=0; i<n; i++) cout << a[i]<<" ";
    

    
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// const char nl= '\n';

// int32_t main() {
//     ios_base::sync_with_stdio(false); 
//     cin.tie(nullptr); 
//     cout.tie(nullptr);
    
//     int n; cin >> n;
//     int a[n];
//     int mx= INT_MIN;
//     for(int i=0; i<n; i++) {
//         cin >> a[i];
//         mx=max(mx,a[i]);
//     }
//     int count[mx+1]={0};
//     for(int i=0; i<n; i++) {
//         count[a[i]]++;
//     }
//     int sum=0;
//     for(int i=1; i<=mx; i++) {
//         count[i]+=count[i+1];
//     }
    
    
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_head(Node *&head,Node *&tail, int v) {

    Node *newNode = new Node(v);
    newNode->next = head;
    if(head==NULL) {
        tail=newNode;
    }
    head = newNode;
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void insert(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    // tmp = pos-1
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void delete_node(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next; // 30
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void print_linekd_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    print_linekd_list(head);
    return 0;
}