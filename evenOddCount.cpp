#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Please Enter the number of elements";
    cin>>n;
    int arr[n];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int evenCounter=0;
    int oddCounter=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            evenCounter++;
        }
        else{
            oddCounter++;
        }
    }
    cout<< "Even: "<<evenCounter<<endl;
    cout<< "Odd: "<<oddCounter<<endl;
    return 0;
}