#include<thread>
#include<vector>
#include<iostream>
#include<string>
#include<mutex>
#include<windows.h>
#include<chrono>
#include <time.h>
 
using namespace std;
 
float velocityX = 1;
float velocityY = 1;
float deltaX;
float deltaY;
 
struct point{ 
	size_t x, y;
};
 
point Point {1, 1};
 
class Field {
public:
	Field(size_t _height, size_t _width) 
	: height(_height), width(_width)
	{}
 
	void PrintField() const {
		cout << height << endl;
		cout << width << endl;
		for (size_t i = 0; i < height; ++i) {
			for (size_t j = 0; j < width; ++j) {
				if (i*j == 0 || i == height - 1 || j == width - 1) {
					cout << '#';
				} else if (i == Point.y && j == Point.x) {
						cout << '0';
				} else {
					cout << ' ';
				}
			if(Point.x * Point.y == 0 or Point.x == height - 1 or Point.y == width - 1) {
				exit(0);
			}
			}
			cout << endl;
		}
 
		Point.y += velocityY;
		
	}
 
	void ClearFiled() const {
		system("cls");
	}
private:
	size_t height, width;		
};
 
 
 
bool pressed = false;
mutex mtx;
 
void printSmt() {
	while(true) {
		mtx.lock();
		if (pressed) {
			cout << "pressed" << endl;
		}
		mtx.unlock();
	}
}
 
void isPressed() {
	while(true) {
		mtx.lock();
		if(GetAsyncKeyState(VK_SPACE) & 0x80000000) {
			velocityY = -1;
		} else {
			velocityY = 1;
			while(!GetAsyncKeyState(VK_SPACE) & 0x80000000) {
				velocityY += 5;
				std::chrono::milliseconds(1000);
			}
		}	
		mtx.unlock();
	}
}
 
void UpdateState(const Field& fld) {
	while(true) {
		fld.PrintField();
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
		fld.ClearFiled();
	}
}
 
int main() {
	Field fld(15, 100);
 
	thread th3(UpdateState, fld);
	thread th1(printSmt);
	thread th2(isPressed);
	th1.join();
	th2.join();
	th3.join();
}
