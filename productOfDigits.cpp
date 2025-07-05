#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int product=1;
    while(n){
        product*=(n%10);
        n=n/10;
    }
    cout<<product;
}