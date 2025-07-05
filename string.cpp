#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string inputString;
    cin>>inputString;
    string output;
    for(int i=0;i<inputString.length();i++){
        if(i + 1 < inputString.length() && inputString[i]=='E' && inputString[i+1]=='F'||i + 1 < inputString.length() && inputString[i]=='5'&&inputString[i+1]=='6'){
            i++;
            continue;
        }
        else if(inputString[i]=='G'){
            continue;
        }
        else{
            output+=inputString[i];
        }
    }
}