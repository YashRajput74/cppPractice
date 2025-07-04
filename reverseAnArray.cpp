#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the size of the array";
    cin >> n;
    int arr[n];
    cout << "Enter the digits ";
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    for(int i=0;i< size/2;i++){
        arr[i]=arr[size-i-1]+arr[i];
        arr[size-i-1]=arr[i]-arr[size-i-1];
        arr[i]=arr[i]-arr[size-i-1];
    }
    cout<<"the output array is: ";
    for (int i = 0; i < size; i++){
        cout << arr[i];
    }
}