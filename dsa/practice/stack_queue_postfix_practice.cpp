// #include <bits/stdc++.h>
// using namespace std;

// vector<int>v;
// const int MAX = 5;

// class Stack {
//     public:
//     void Push(int value) {
//         if(v.size() == MAX) {
//             cout << "Stack is full" << '\n';
//             return;
//         }
//         v.push_back(value);
//     }
//     void Pop() {
//         if(v.size() == 0) {
//             cout << "Stack is empty" << '\n';
//             return;
//         }
//         v.pop_back();
//     }
//     void print() {
//         vector<int>::reverse_iterator it ;
//         for(it = v.rbegin(); it != v.rend(); ++it) cout << *it << ' ';
//     }
// };

// int main() {

//     Stack s;
//     s.Push(4);
//     s.Push(6);
//     s.Push(5);
//     s.print();
//     s.Pop();
//     s.print();
//     s.Pop();
//     s.Pop();
//     s.Pop();

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// list<int>v;
// const int MAX = 5;

// class Queue {
//     public:
//     void Push(int value) {
//         if(v.size() == MAX) {
//             cout << "Queue is full" << '\n';
//             return;
//         }
//         v.push_back(value);
        
//     }
//     void Pop() {
//         if(v.size() == 0) {
//             cout << "Queue is empty" << '\n';
//             return;
//         }
//         v.pop_front();
//     }
//     void print() {
//         list<int>::iterator it ;
//         for(it = v.begin(); it != v.end(); ++it) cout << *it << ' ';
//     }
//     int Front() {
//         return v.front();
//     }
// };

// int main() {

//     Queue s;
//     s.Push(4);
//     s.Push(6);
//     s.Push(5);
//     s.print();
//     s.Pop();
//     s.print();
//     s.Pop();
//     s.Pop();
//     s.Pop();

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int cnt = 0;
// void tower(int disk, char b, char e, char ax) {
//     if(disk == 0) return;
//     tower(disk - 1,b,ax,e);
//     cout << "Move disk " << disk << " from " << b << " to " << e << '\n';
//     cnt++;
//     tower(disk - 1,ax,b,e);
// }

// int main() {

 
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int evaluate(string str) {
    stack<int>s;
    for(int i = 0; i < (int)str.size(); i++) {
        if(isdigit(str[i])) {
            s.push(str[i] - '0');
        }
        else {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            

        }
    }
}


int32_t main() {


    return 0;
}