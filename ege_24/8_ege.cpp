#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream("C:\\Users\\111040\\c++\\ABD.txt");
	string str;
	char last;
	char new1;
	int max_lentgth = 1, cur_length = 1;
	ifstream in("C:\\Users\\111040\\c++\\ABD.txt");
	in >> last;
	while(in >> new1){
    	if(last == 'B' and new1 == 'B'){
        	cur_length ++;
        }
    	else{
        	cur_length = 1;
		}
		last = new1;
		if(cur_length > max_lentgth){
        		max_lentgth = cur_length;
        	}
    }
	cout << max_lentgth;
	return 0;
}
