#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the number of elements in an array";
    cin>>n;
    int arr[n];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sum;
    cout<<"enter the sum of digits";
    cin>>sum;
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]==sum-arr[i]){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}