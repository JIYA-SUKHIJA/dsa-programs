#include<iostream>
using namespace std;
int main(){
    char c;
    c = 'A';
    char *ptr;
    ptr = &c;
    cout<<"c = "<<c<<endl;
    cout<<"Address of c = "<<&c<<endl;
    cout<<"Address of c using pointer = "<<ptr<<endl;
    cout<<"Value of c using pointer = "<<*ptr<<endl;
    return 0 ;
}