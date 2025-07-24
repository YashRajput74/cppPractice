#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no of elements in the array";
    cin>>n;
    cout<<"Enter each element one by one";
    int arr[n];
    int size = n;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=1;i<size-1;i++){
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}