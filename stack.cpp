#include <iostream>
using namespace std;

template<typename T>
struct Node{
	T value;
	Node* next;
	
};

template<typename T>
class stack{
private:
	
	Node<T>* first;
	size_t cap;
	
public:
	
	void push(T a){
		Node<T>* tmp = new Node<T>;
		tmp -> value = a;
		tmp -> next = first;
		cap += 1;
		first = tmp;
		delete[] tmp;
	}
	
	void pop(){
		Node<T>* tmp = new Node<T>;
		first = first -> next;
		tmp -> value = first -> next -> value;
		cap -= 1;
		delete[] first;
		first = tmp;
		delete[] tmp;
	}
	
	stack(T rhs){
		Node<T>* tmp = new Node<T>;
		tmp -> value = rhs;
		tmp -> next = 0; //nullptr instead of 0
		cap = 1;
		first = tmp;
		delete[] tmp;
		
	}
//	~stack(){
//		while(true){
//		    pop();
//		}
//	}
//надо пределать деструктр с try catch	
	
//	int operator[](size_t _index) const {
//		int stb;
//		for (int i = 0; i < _index; i++){
//			stb = first -> value;
//		}
//		return first -> next -> value;
//	}
//надо доделать перегрузку скобок для вывода стека
};

template<typename T>
inline ostream& operator<<(ostream& os, const stack<T>& st) {
    for (size_t i = 0; i < st.cap(); i++) 
		os << st[i] << " ";
    return os;
}

int main(){
	stack<int> st1(1);
	st1.push(4);
	st1.push(2);
	st1.push(3);
	st1.pop();
//	cout << st1;

}
