// #include <iostream>
// using namespace std;
// const int MAX = 5;
// int q[MAX];
// int f = -1, r = -1;

// void Enqueue(int val) {
//     if ((f == 0 and r == MAX-1) or (f == r+1)) {
//         cout<<"Overflow\n";
//         return;
//     }
//     if (f == -1) {
//         f = 0;
//         r = 0;
//     } 
//     else {
//         if (r == MAX - 1) r = 0;
//         else ++r;
//     }
//     q[r] = val ;
// }
// void Dequeue() {
//     if (f == -1) {
//         cout<<"Underflow\n";
//         return ;
//    }
//    cout<<"Deleted : "<<q[f]<<endl;

//     if (f == r) {
//         f = -1;
//         r = -1;
//     } 
//     else {
//         if (f == MAX - 1) f = 0;
//         else ++f;
//    }
// }
// void Display() {
//    if (f == -1) {
//       cout<<"Empty"<<'\n';
//       return;
//    }
//    cout<<"Queue :\n";
//    if (f <= r) {
//         for(int i=f; i<=r; i++) cout<<q[i]<<" ";
//         cout<<'\n';
//     } 
//     else {
//         for(int i=f; i<= MAX-1; i++) cout<<q[i]<<" ";
//         for(int i=0; i<=r; i++) cout<<q[i]<<" ";
//    }
//    cout<<'\n';
// }

// int32_t main() {

//     cout<<"1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";

//     int method ;
//     bool flag = true; 
//     while(flag) {
//         cout<<"Enter method: ";
//         cin >> method;
//         switch (method) {
//         case 1:
//             cout<<"Input value: ";
//             int value;
//             cin >> value;
//             Enqueue(value);
//             break;
//         case 2:
//             Dequeue();
//             break;
//         case 3:
//             Display();
//             break;
//         case 4:
//             flag = false;
//             break;
//         default:
//             cout<<"Invalid";
//             break;
//         }        
//     }
    
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
int MAX = 5;
class myQueue {
public:
    list<int> l;
    void Enqueue(int val) {
        if(l.size()==MAX) {
            cout<<"Overflow!\n";
            return;
        }
        l.push_back(val);
    }
    void Dequeue() {
        if(l.size()== 0) {
            cout<<"Underflow!\n";
            return;
        }
        l.pop_front();
    }
    void display() {
        for(int x : l) cout<<x<<" ";
    }
};
int main()
{
    myQueue q;
    cout<<"1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";

    int method ;
    bool flag = true; 
    while(flag) {
        cout<<"Enter method: ";
        cin >> method;
        switch (method) {
        case 1:
            cout<<"Input value: ";
            int value;
            cin >> value;
            q.Enqueue(value);
            break;
        case 2:
            q.Dequeue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            flag = false;
            break;
        default:
            cout<<"Invalid";
            break;
        }        
    }
    
    return 0;
}