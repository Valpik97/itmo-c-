#include <iostream>
using namespace std;

int foo(int a){
	if(a == 1){
		return 1;
	}

	return foo(a - 1) * a;
}


int main(){
	int m, n = 4;
	m = foo(n);
	cout << m;
	return 0;
}
