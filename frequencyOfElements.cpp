#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the no of elements of the array:";
    cin>> n;
    int arr[n];
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<< "now enter each element one by one";
    for( int i=0; i< size;i++){
        cin>>arr[i];
    }
    int maxNum=arr[0];
    for(int i=1;i<size;i++){
        if(maxNum<arr[i]){
            maxNum=arr[i];
        }
    }
    int hashMap[maxNum+1]={0};
    int hashSize=sizeof(hashMap)/sizeof(hashMap[0]);
    for(int i=0;i<size;i++){
        hashMap[arr[i]]++;
    }
    for(int i=0;i<hashSize;i++){
        if(hashMap[i]){
            cout<< i << " comes " << hashMap[i] <<" times."<<endl;
        }
    }
    return 0;
}