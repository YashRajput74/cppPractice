#include <iostream>
using namespace std;
/* reworked it again */
int main(){
    int n;
    cout<<"Enter the no of elements:";
    cin>>n;
    int arr[n];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int isSorted;
    for(int i=1;i<size;i++){
        if(arr[i-1]>arr[i]){
            isSorted=false;
            break;
        }
    }
    if(isSorted){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    return 0;
}