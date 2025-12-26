#include <iostream>
using namespace std;

int a = 5;
int* p = &a;
int** q = &p;

int main(){
    cout << *p <<endl;//5
    cout << **q <<endl;//5
    cout << p <<endl;//address of p
    cout << *q <<endl;//address of p
}

void ChangeA(int a){
    int a=20;
}

int main(){
    int a=10;
    ChangeA(a);
    cout << "inside max fn: "<<a <<endl;
    return 0;
}