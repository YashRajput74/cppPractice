#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter the no of elements: ";
    cin>>n;
    cout<< "Enter the elements one by one";
    int arr[n];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int maxNum;
    int secondMaxNum;
    if(arr[0]>arr[1]){
        maxNum=arr[0];
        secondMaxNum=arr[1];
    }
    else{
        secondMaxNum=arr[0];
        maxNum=arr[1];
    }
    for(int i=2;i<size;i++){
        if(arr[i]>maxNum){
            secondMaxNum=maxNum;
            maxNum=arr[i];
        }
        else if(secondMaxNum<arr[i]<maxNum){
            secondMaxNum=arr[i];
        }
    }
    cout<<"the second  largest number is:"<<secondMaxNum;
    return 0;
}