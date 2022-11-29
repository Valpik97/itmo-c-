#include <iostream>
#include <cmath>
using namespace std;

int foo(int n){
	int s = 0;
	if(n <= 1){
		return s;
	}
	s += n % 10;
	return foo(n / 10);
}
int main(){
	int n = 12345, a;
	a = foo(n);
	cout << a;
	return 0;	
}
