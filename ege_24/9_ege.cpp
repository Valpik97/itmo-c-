#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char last;
	char new1;
	char new2;
	int max_lentgth = 1, cur_length = 1, a = 0;
	ifstream in("C:\\Users\\111040\\c++\\ABCD.txt");
	in >> last;
	while(in >> new1){
    	if(last != new1 and a <= 5){
        	cur_length ++;
        	a++;
        }
    	else{
        	cur_length = 1;
        	a = 0;
		}
		last = new1;
		if(cur_length > max_lentgth){
        		max_lentgth = cur_length;
        	}
    	}
	cout << max_lentgth;
	return 0;
}
