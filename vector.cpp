#include<iostream>
#include<cstring>
#include<vector>

using namespace std;


class TMyIntVector {
public:
	TMyIntVector(size_t _capacity) 
		: __capacity(_capacity)
		, __size(0)
	{
		__first_elem = new int[__capacity];
	}
	
	TMyIntVector(TMyIntVector& rhs) = delete;
	TMyIntVector& operator=(TMyIntVector& rhs) = delete;
	
	~TMyIntVector() {
		delete[] __first_elem;
	}
	
	void push_back(int _elem) {
		if (__size == __capacity) {
			__capacity *= 2;
			int* tmp = new int[__capacity];
			
			memcpy(tmp, __first_elem, __size * sizeof(int));
			delete [] __first_elem;
			
			__first_elem = tmp;
		}
		
		__first_elem[__size] = _elem;
		__size++;
	}
	
	int operator[](size_t _index) const {
		return __first_elem[_index];
	}
	
	size_t size() const {
		return __size;
	}
	
	size_t capacity() const {
		return __capacity;
	}
private:
	int* __first_elem;
	size_t __size;
	size_t __capacity; // __size == __capacity ?
};

int main() {
//	vector<int> vec = {1, 2, 3, 4};
//	cout << "size: " << vec.size() << endl;
//	cout << "capacity: " << vec.capacity() << endl;
//	
//	vec.push_back(1);
//	cout << "capacity: " << vec.capacity() << endl;
//	vec.push_back(2);
//	
//	cout << "size: " << vec.size() << endl;
//	cout << "capacity: " << vec.capacity() << endl;
	
	TMyIntVector myVec(1);
	cout << "size: " << myVec.size() << " capacity: " << myVec.capacity() << endl;
	myVec.push_back(1);
	cout << "size: " << myVec.size() << " capacity: " << myVec.capacity() << endl;
	myVec.push_back(2);
	cout << "size: " << myVec.size() << " capacity: " << myVec.capacity() << endl;
	myVec.push_back(3);
	cout << "size: " << myVec.size() << " capacity: " << myVec.capacity() << endl;
	myVec.push_back(4);
	cout << "size: " << myVec.size() << " capacity: " << myVec.capacity() << endl;
	for(int i = 0; i < myVec.size(); i++){
		cout << myVec.
	}
}
