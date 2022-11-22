#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char a;
	char b;
	char c;
	int max_lentgth = 0, cur_length = 0;
	ifstream in("C:\\Users\\111040\\c++\\ABD.txt");
	in >> a >> b;
	while(in >> a){
    	if((a == 'B' and b == 'D' and c == 'A') or (a == 'B' and b == 'A' and c == 'D')){
        	cur_length++;
        	
        }
    	else{
        	cur_length = 0;
		}
		if(cur_length > max_lentgth){
        		max_lentgth = cur_length;
		}
		in >> a >> b;
	}
	cout << max_lentgth;
	return 0;
}
