#include<iostream>
using namespace std;

void foo(){
    int a = 4;
    int* pa = &a;
    cout << pa;
}

int main(){
    int a = 4;
    int b = 5;
    float c = 4.0;
    int* pa = &a;
    int* pb = &b;
    float* pc = &c;

    cout << pa << " " << pb << " " << pc << "\n";
    foo();
    
    return 0;
}