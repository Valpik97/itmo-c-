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
	
	
public:
	int cap;
	
	T top(){
		if(first == 0){
			cout << ("Stack is empty");
		}
		return first -> value;
	}
	
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
		tmp -> value = first ->value;
		tmp -> next = first;
		first = tmp;
		cap -= 1;
		delete[] first;
		delete[] tmp;
		
	}
	
	stack(T rhs){
		Node<T>* tmp = new Node<T>;
		tmp -> value = rhs;
		tmp -> next = 0;
		cap = 1;
		first = tmp;
		delete[] tmp;
		
	}
 	~stack(){
 	    try{
 		while(true){
 		    pop();
 		}
 	    }catch (int a){
             cout << "stack is empty";
         }
 	}
	
	T operator[](unsigned index) const{
		Node<T>* tmp = first;
		for(int i = 0; i < index; i++){
			tmp = tmp -> next;
		}
		return tmp -> value;

		}
};

 template<typename T>
 inline ostream& operator<<(ostream& os, const stack<T>& st) {
     for (size_t i = 0; i < st.cap; i++) 
 		os << st[i] << " ";
     return os;
 }

int main(){
	stack<int> st1(1);
	st1.push(4);
	st1.push(2);
	st1.push(3);
 	cout << st1[0] << endl;
	cout << st1.top() << endl;
	cout << st1 << endl;
 	st1.pop();
 	cout << st1.top() << endl;
	cout << st1;
}
