#include <iostream>
using namespace std;
 
class myVector2D {
public:
	myVector2D(double x, double y) {
		_x = x;
		_y = y;
	}
 
	double getX() const {
		return _x;
	}
 
	double getY() const {
		return _y;
	}
	
	double _x, _y;
};
 
myVector2D operator+(const myVector2D& vec1, const myVector2D& vec2) {
	return myVector2D{
		vec1.getX() + vec2.getX(), 
		vec1.getY() + vec2.getY()
	};
}
myVector2D operator+=(const myVector2D& vec1, const myVector2D& vec2) {
	return myVector2D{
		 vec2.getX(), 
		 vec2.getY()
	};
}

myVector2D operator*(const myVector2D& vec1, const myVector2D& vec2) {
	return myVector2D{
		vec1.getX() * vec2.getX(), 
		vec1.getY() * vec2.getY()
	};
	
}
myVector2D operator*(const myVector2D& vec1, int a) {
	return myVector2D{
		vec1.getX() * a, 
		vec1.getY() * a
	};
}
myVector2D operator*=(const myVector2D& vec1, int a) {
	return myVector2D{
		vec1.getX() * a, 
		vec1.getY() * a
	};
}
myVector2D operator*=(const myVector2D& vec1, const myVector2D& vec2) {
	return myVector2D{
		vec1.getX() * vec2.getX(), 
		vec1.getY() * vec2.getY()
	};
}
 
int main() {
	myVector2D vec1 (1, 2);
	myVector2D vec2 (3, 4);	
	myVector2D vec3 = vec1 + vec2;
//	myVector2D vec3 = vec1;
//	vec3 += vec2;
//	vec3 *= 2;
//	vec3 *= vec2;
	
std::cout << vec3.getX() << " " << vec3.getY();
}
