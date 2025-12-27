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
/* a file can not have two mains... */