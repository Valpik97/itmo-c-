#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream in ("D:\c++\ABC.txt");
	int sum;
	string str;
	while(getline(in, str)){
		for(int i = 0; i < str.size(); i++){
			if(str[i] == 'B' and str[i+1] == 'C' and str[i+2] == 'A'){
				sum += 1;
			}
		}
	}
	cout << sum;
	return 0;
}