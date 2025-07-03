#include <iostream>
using namespace std;

int main(){
    int n[] = {1,2,3,4,5,6,7,8,9};
    int maxNum=n[0];
    for(int i=1;i<sizeof(n)/sizeof(n[0]);i++){
        if(n[i]>maxNum){
            maxNum=n[i];
        }
    }
    cout << "max of array: "<< maxNum;
    return 0;
}