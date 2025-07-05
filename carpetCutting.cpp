//You're given a number of cuts N, and asked to maximize the number of equal squares or rectangles from a carpet, using only horizontal or vertical cuts.
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int lastResult=1;
    for(int i=0;i<n;i++){
        int maxSquares=(i+1)*(n-i+1);
        if(maxSquares>lastResult){
            lastResult=maxSquares;
        }
    }
    cout<<lastResult;
}