#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[]={12,45,23,51,19,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        int smallestIndex=i;
        for(int j=i;j<size;j++){
            if(arr[j]<arr[smallestIndex]){
                smallestIndex=j;
            }
        }
        swap(arr[i],arr[smallestIndex]);
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}