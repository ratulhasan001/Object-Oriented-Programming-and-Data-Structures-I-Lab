// #include <bits/stdc++.h>
// using namespace std;

// const int N= 10;
// int Stack[N] , top = -1;
// bool flag=true;

// void push(int val) {
//     if(top>=N-1) {   // 5 5-1 
//         cout<<"Stack is full!!!!!"<<'\n';
//         return;
//     }
//     Stack[++top]=val;
// }
// void pop(){
//     if(top<=-1) {  // 4 3 2 1 0 -1 
//         cout<<"Stack is empty!!!!!"<<'\n';
//         return;
//     }
//     --top;
// }
// void display() { 
//     for(int i=top; i>=0; i--) cout<<Stack[i]<<" ";
//     cout<<'\n';
// }

// int32_t main() {

//     cout<<"1.Push\n2.Pop\n3.Display\n4.Exit\n";

//     while(flag) {

//         int x;
//         cout<<"Enter method: ";
//         cin >> x;

//         switch (x) {
//         case 1:
//             int num;
//             cout<<"How many values you want to push? : ";
//             cin >> num;
//             cout<<"Enter the value to push: ";
//             while(num--) {
//                 int a; cin >> a;
//                 push(a);
//             }
//             cout<<"Stack after pushing: \n";
//             display();
//             break;

//         case 2:
//             cout<<"How many values to pop:  ";
//             int a; cin >> a;
//             while(a--) pop();
//             cout<<"Stack after pop: \n";
//             display();
//             break;

//         case 3:
//             cout<<"Representing Stack: \n";
//             display();
//             break;

//         case 4:
//             cout<<"Exiting Program.................\n";
//             flag=false;
//             break;                                    

//         default:
//             cout<<"Invalid Operation!!! Enter again!!!!\n";
//             break;
//         }
//     }


    
//     return 0;
// }


// postfix

#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    string s; cin >> s;

    stack<int>value;
    s+=')';
 
    if(s[0]==')') {
        cout<<"invalid";
        return 0;
    }

    for(int i=0; i<(int)s.length(); i++) {
        if(s[i]==')') break;
        
        if(isdigit(s[i])) {
            value.push(s[i]-'0');
        }
        else {
            int a= value.top();
            value.pop();
            int b= value.top();
            value.pop();
            if(s[i]=='+') value.push(b+a);
            else if(s[i]=='-') value.push(b-a);
            else if(s[i]=='*') value.push(b*a);
            else if(s[i]=='/') value.push(b/a);
        }
    }
    cout<<value.top();

    return 0;
}



// infix to postfix

// #include <bits/stdc++.h>
// using namespace std;

// int power(char prec) {
//     if(prec=='+') return 1;
//     else if(prec=='-') return 1;
//     else if(prec=='*') return 2;
//     else if(prec=='/') return 2;
//     else if(prec=='^') return 3;
//     else return -1;

// }

// int main() {

//     stack<char>ch;
//     string s, ans="";
//     cin >> s;

//     for(int i=0; i<(int)s.length();  i++) {
//         if((s[i]>='A' and s[i]<='Z') or (s[i]>='a' and s[i]<='z') or (s[i]>='0' and s[i]<='9')) {
//             ans+=s[i];
//         }
//         else if(s[i]=='(') ch.push(s[i]);

//         else if(s[i]==')') {
//             while(ch.top()!='(') {
//                 ans+=ch.top();
//                 ch.pop();
//             }
//             ch.pop();
//         }
//         else {
//             while(!ch.empty() and power(s[i])<=power(ch.top())) {
//                 ans+=ch.top();
//                 ch.pop();
//             }
//             ch.push(s[i]);
//         }
//     }
//     while(!ch.empty()) {
//         ans+=ch.top();
//         ch.pop();
//     }
//     cout<<ans;

//     return 0;
// }