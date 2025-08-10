#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int flag=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
       cin>>arr[i]; 
    }
    for(int i=1;i<size;i++){
        int temp;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                flag=1;
            }
            if(flag==1){
                int temporary;
                temporary=arr[j];
                arr[j]=temp;
                temp=temporary;
            }
        }
        flag=0;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}

