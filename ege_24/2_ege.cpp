#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream("D:\\c++\\ABD.txt");
	string str;
	char last;
	char new1;
	int max_lentgth = 0, cur_length;
	auto in = ifstream("D:\\c++\\ABD.txt");
	in >> last;
	while(in >> new1){
    	if((last == 'B' and new1 == 'D') or (last == 'B' and new1 == 'A')){
        	cur_length = 1;
        	last = new1;
        }
    	else{
        	cur_length++;
		}
		if(cur_length > max_lentgth){
        		max_lentgth = cur_length;
		}
	}
	cout << max_lentgth;
	return 0;
}
