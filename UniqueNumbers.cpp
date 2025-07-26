/* You are given an array of size n - 1 that contains unique numbers ranging from 1 to n, but one number is missing. Write a program in C++ to find the missing number. */

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool hashMap[n+1]={false};
    for(int i=0;i<n;i++){
        hashMap[arr[i]]=true;
    }
    for(int i=1;i<n+1;i++){
        if(!hashMap[i]){
            cout<<i;
            break;
        }
    }
    return 0;
}