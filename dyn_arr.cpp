#include <iostream>
using namespace std;

class dyn_arr { 
public:
	int* arr;
	int max;
	int cap;
	
	dyn_arr(int _max,int _cap){
		arr = new int* [max];
		max = _max; 
		cap = _cap;
	}
	
	
void add(int a){
	if(cap  == max){
		int* arr2 = new int[2 * max];
		for(int i = 0; i < max ; i++){
			arr[i] = arr2[i];
		}
		delete arr;
		arr = arr2;
		max *= 2;
	}
	arr[cap] = a;
	cap++;
}
};

dyn_arr operator <<(ostream& out, const dyn_arr& xarr){
	for(int i = 0; i < xarr.cap; i++){
		return out << xarr.arr[i];
	}
	
}
int main(){
	
}
