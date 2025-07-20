/* 
Given a stack of integers, your task is to reverse the stack using recursion. You cannot use any additional data structures like another stack or array, and the only operations you can use are:
Push
Pop
Top/Peek
IsEmpty
*/

#include <iostream>
#include <stack>
using namespace std;

void reverseStack(const stack<int>& stk){
    if(stk.empty()) return;
    char c = stk.top();
    
}

int main(){
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);

    reverseStack(stk);
}