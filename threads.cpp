#include <thread>
#include <iostream>
#include <string>
#include <vector>
#include <mutex>
using namespace std;

mutex mtx;

int money = 1000;

void withdraw(int amount){
	mtx.lock();
	if (money < amount){
		cerr << " no money " << endl;
		return;
	}
	else{
	money -= amount;
	cout << money;
	}
	mtx.unlock();
}

void deposit(int amount){
	mtx.lock();
	money += money + amount;
	cout << money;
	mtx.unlock();
	
}

void SayHello(const string& name){
	mtx.lock();
	cout<< "Hello " ;
	cout << name << endl;
	mtx.unlock();
	
	
	
}

int main()
{
	vector<thread> vc;
//	vector<string> names = {"John", "Yan", " Boris", "John", "Yan", " Boris"};
//	for(auto& it : names){
//		vc.push_back(thread(SayHello, it));
//	}
//	for(auto& it : vc){
//		it.join();
//	}
	vc.push_back(thread(withdraw(100), deposit(100));
	
	for(auto& it : vc){
		it.join();
	}
	
	
	
}
