// Given a string, reverse it using a stack.

#include <iostream>
#include <stack>
using namespace std;

string reverseString(const string& str){
    stack<char> s;
    for(char ch: str){
        s.push(ch);
    }
    string reversedStr="";
    while(!s.empty()){
        reversedStr+=s.top();
        s.pop();
    }
    return reversedStr;
}

int main(){
    string str="Hello";
    cout<<reverseString(str)<<endl;

    return 0;
}