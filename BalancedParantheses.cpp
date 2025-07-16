#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(const string& str){
    stack<char> s;
    for(char val: str){
        if(val=='(' || val =='{' || val == '['){
            s.push(val);
        }
        else if(val==')' || val =='}' || val == ']'){
            
            if(s.empty()){
                return false;
            }
            
            char top=s.top();
            s.pop();

            if(val==')' && top != '(' || val=='}' && top != '{' || val==']' && top != '['){
                return false;
            }

        }
    }
    return s.empty();
}

int main(){
    string str="({[]})";
    cout<<isBalanced(str);
    return 0;
}