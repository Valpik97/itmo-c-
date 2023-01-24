#include<iostream>
#include<cstring>
#include<vector>
#include<string>

using namespace std;

template<typename T>
class TMyIntVector {
public:
	TMyIntVector(size_t _capacity) 
		: __capacity(_capacity)
		, __size(0)
	{
		__first_elem = new T[__capacity];
	}
	
	TMyIntVector(TMyIntVector& other) {
    if (this != &other) {
        delete[] __first_elem;
     	__first_elem = new T[other.__capacity];
        for (size_t i = 0; i < other.__size; ++i)
			__first_elem[i] = other.__first_elem[i];
        __size = other.__size;
        __capacity = other.__capacity;
    }
}

	TMyIntVector& operator=(TMyIntVector& other) {
    if (this != &other) {
        delete[] __first_elem;
      	__first_elem = new T[other.__capacity];
      	for (size_t i = 0; i < other.__size; ++i) 
			__first_elem[i] = other.__first_elem[i];
        __size = other.__size;
        __capacity = other.__capacity;
    }
    return *this;
}
	
	~TMyIntVector() {
		delete[] __first_elem;
	}
	
	void push_back(int _elem) {
		if (__size == __capacity) {
			__capacity *= 2;
			T* tmp = new T[__capacity];
			
			memcpy(tmp, __first_elem, __size * sizeof(int));
			delete [] __first_elem;
			
			__first_elem = tmp;
		}
		
		__first_elem[__size] = _elem;
		__size++;
	}
	void remove(int _elem2){
		__size--;
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
	T* __first_elem;
	size_t __size;
	size_t __capacity;
};

template<typename T>
inline ostream& operator<<(ostream& os, const TMyIntVector<T>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) 
		os << vec[i] << " ";
    return os;
}

int main() {
	
 
	TMyIntVector<int> myVec(1);
	cout << "size: " << myVec.size() << " capacity: " << myVec.capacity() << endl;
	myVec.push_back(1);
	cout << "size: " << myVec.size() << " capacity: " << myVec.capacity() << endl;
	myVec.push_back(2);
	cout << myVec;
		
	
	
	
}
