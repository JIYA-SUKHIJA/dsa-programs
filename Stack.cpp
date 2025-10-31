#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<"Top element: "<<s.top()<<endl;
    s.pop();
    cout<<"After pop, top: "<<s.top()<<endl;

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}